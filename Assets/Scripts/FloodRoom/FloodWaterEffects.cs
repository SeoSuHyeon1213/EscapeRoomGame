using UnityEngine;
using UnityEngine.Rendering;

namespace FloodRoom
{
    /// <summary>Presentation driven by the puzzle's authoritative water level.</summary>
    sealed class FloodWaterEffects
    {
        static readonly int Flow = Shader.PropertyToID("_Flow");
        static readonly int WaterMode = Shader.PropertyToID("_WaterMode");
        static readonly int LampPosition = Shader.PropertyToID("_LampPosition");
        static readonly int LampColor = Shader.PropertyToID("_LampColor");
        static readonly int BeamPosition = Shader.PropertyToID("_BeamPosition");
        static readonly int BeamColor = Shader.PropertyToID("_BeamColor");
        static readonly int BeamDirection = Shader.PropertyToID("_BeamDirection");

        readonly Transform stream;
        readonly Transform outlet;
        readonly Vector3 initialStreamScale;
        readonly Renderer surfaceRenderer;
        readonly Renderer streamRenderer;
        readonly ParticleSystem spray;
        readonly ParticleSystemRenderer sprayRenderer;
        readonly AudioSource waterAudio;
        readonly AudioLowPassFilter waterFilter;
        readonly Light lamp;
        readonly Light beam;
        readonly MaterialPropertyBlock properties = new MaterialPropertyBlock();
        float flow;
        float submersion;

        public FloodWaterEffects(Transform surface, Transform stream, Light lamp, Light beam, AudioSource waterAudio)
        {
            this.stream = stream;
            this.lamp = lamp;
            this.beam = beam;
            this.waterAudio = waterAudio;
            outlet = stream.parent;
            initialStreamScale = stream.localScale;
            surfaceRenderer = surface.GetComponent<Renderer>();
            streamRenderer = stream.GetComponent<Renderer>();
            streamRenderer.shadowCastingMode = ShadowCastingMode.Off;
            waterFilter = waterAudio.gameObject.AddComponent<AudioLowPassFilter>();
            waterFilter.cutoffFrequency = 22000f;

            var droplets = new GameObject("Inlet Spray");
            droplets.layer = surface.gameObject.layer;
            droplets.SetActive(false);
            droplets.transform.SetParent(surface.parent, false);
            droplets.transform.rotation = Quaternion.LookRotation(Vector3.up, Vector3.forward);
            spray = droplets.AddComponent<ParticleSystem>();
            sprayRenderer = droplets.GetComponent<ParticleSystemRenderer>();
            sprayRenderer.sharedMaterial = surfaceRenderer.sharedMaterial;
            sprayRenderer.shadowCastingMode = ShadowCastingMode.Off;
            sprayRenderer.renderMode = ParticleSystemRenderMode.Stretch;
            sprayRenderer.velocityScale = 0.065f;
            sprayRenderer.lengthScale = 1.1f;
            sprayRenderer.maxParticleSize = 0.035f;

            var main = spray.main;
            main.playOnAwake = false;
            main.loop = true;
            main.simulationSpace = ParticleSystemSimulationSpace.World;
            main.maxParticles = 72;
            main.startLifetime = new ParticleSystem.MinMaxCurve(0.16f, 0.33f);
            main.startSpeed = new ParticleSystem.MinMaxCurve(0.5f, 1.5f);
            main.startSize = new ParticleSystem.MinMaxCurve(0.009f, 0.023f);
            main.gravityModifier = 0.55f;
            var shape = spray.shape;
            shape.shapeType = ParticleSystemShapeType.Cone;
            shape.angle = 48f;
            shape.radius = 0.025f;
            shape.arc = 180f; // Fan toward the room, away from the wall.
            var fade = spray.colorOverLifetime;
            fade.enabled = true;
            var gradient = new Gradient();
            gradient.SetKeys(
                new[] { new GradientColorKey(Color.white, 0f), new GradientColorKey(Color.white, 1f) },
                new[] { new GradientAlphaKey(0.8f, 0f), new GradientAlphaKey(0f, 1f) });
            fade.color = new ParticleSystem.MinMaxGradient(gradient);
            droplets.SetActive(true);
            spray.Play();
        }

        public void Update(float level, float ceiling, bool flooding, bool ended, Camera view, float dt)
        {
            Vector3 inlet = outlet.position;
            float drop = Mathf.Max(0f, inlet.y - level);
            float airImpact = Mathf.SmoothStep(0f, 1f, Mathf.Clamp01(drop / 0.45f));
            flow = Mathf.MoveTowards(flow, flooding ? 1f : 0.3f, dt * 1.4f);
            float impact = airImpact * flow;

            streamRenderer.enabled = drop > 0.015f;
            if (streamRenderer.enabled)
            {
                float width = Mathf.Lerp(1f, 2.9f, flow);
                stream.localScale = new Vector3(initialStreamScale.x * width, drop * 0.5f, initialStreamScale.z * width);
                stream.position = inlet - Vector3.up * (drop * 0.5f);
            }

            spray.transform.position = new Vector3(inlet.x, level + 0.012f, inlet.z + 0.035f);
            var emission = spray.emission;
            emission.rateOverTime = ended ? 0f : 115f * impact;
            var main = spray.main;
            main.startSpeed = new ParticleSystem.MinMaxCurve(0.45f, Mathf.Lerp(0.6f, 1.6f, impact));

            float targetSubmersion = view != null ? Mathf.InverseLerp(level + 0.035f, level - 0.075f, view.transform.position.y) : 0f;
            submersion = Mathf.MoveTowards(submersion, targetSubmersion, dt * 4f);
            waterFilter.cutoffFrequency = Mathf.Lerp(Mathf.Lerp(1300f, 22000f, airImpact), 520f, submersion);
            if (!ended)
            {
                Vector3 source = spray.transform.position;
                source.y = Mathf.Min(inlet.y, source.y);
                waterAudio.transform.position = source;
                waterAudio.volume = Mathf.MoveTowards(waterAudio.volume, Mathf.Lerp(0.18f, 0.95f, flow) *
                    Mathf.Lerp(0.62f, 1f, airImpact), dt);
            }

            properties.SetVector(Flow, new Vector4(inlet.x, inlet.z, impact, Mathf.Clamp01(level / ceiling)));
            SetLight(lamp, LampPosition, LampColor);
            SetLight(beam, BeamPosition, BeamColor);
            if (beam != null)
            {
                Vector3 forward = beam.transform.forward;
                properties.SetVector(BeamDirection, new Vector4(forward.x, forward.y, forward.z,
                    Mathf.Cos(beam.spotAngle * 0.5f * Mathf.Deg2Rad)));
            }

            Apply(surfaceRenderer, 0f);
            Apply(streamRenderer, 1f);
            Apply(sprayRenderer, 2f);
        }

        void SetLight(Light light, int positionId, int colorId)
        {
            if (light == null || !light.isActiveAndEnabled)
            {
                properties.SetColor(colorId, Color.black);
                return;
            }
            Vector3 position = light.transform.position;
            properties.SetVector(positionId, new Vector4(position.x, position.y, position.z,
                1f / Mathf.Max(light.range * light.range, 0.01f)));
            properties.SetColor(colorId, light.color * light.intensity);
        }

        void Apply(Renderer target, float mode)
        {
            properties.SetFloat(WaterMode, mode);
            target.SetPropertyBlock(properties);
        }
    }
}

