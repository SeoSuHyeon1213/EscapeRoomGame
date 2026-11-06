using UnityEngine;

namespace FloodRoom
{
    /// <summary>음원 파일 없이 프로토타입용 공포 사운드를 합성한다.</summary>
    public static class SynthAudio
    {
        const int SampleRate = 22050;

        /// <summary>콘크리트 너머에서 전해지는 둔탁한 두드림.</summary>
        public static AudioClip Knock()
        {
            float[] data = new float[(int)(SampleRate * 0.35f)];
            System.Random random = new System.Random(7);
            for (int i = 0; i < data.Length; i++)
            {
                float t = i / (float)SampleRate;
                float thump = Mathf.Sin(2f * Mathf.PI * Mathf.Lerp(110f, 55f, t * 3f) * t) * Mathf.Exp(-t * 16f);
                float crack = ((float)random.NextDouble() * 2f - 1f) * Mathf.Exp(-t * 90f) * 0.35f;
                data[i] = Mathf.Clamp(thump + crack, -1f, 1f);
            }
            return Create("Knock", data);
        }

        /// <summary>흐르는 물소리. 잡음을 저역 통과시켜 끊김 없이 반복되게 만든다.</summary>
        public static AudioClip WaterLoop() => FilteredNoiseLoop("WaterLoop", 4f, 0.18f, 0.5f, 0f);

        /// <summary>방 전체를 누르는 저주파 울림.</summary>
        public static AudioClip DroneLoop() => FilteredNoiseLoop("DroneLoop", 6f, 0.015f, 1.6f, 49f);

        static AudioClip FilteredNoiseLoop(string clipName, float seconds, float smoothing, float gain, float toneHz)
        {
            int length = (int)(SampleRate * seconds);
            int crossfade = SampleRate / 2;
            float[] raw = new float[length + crossfade];
            System.Random random = new System.Random(clipName.Length);
            float low = 0f;
            for (int i = 0; i < raw.Length; i++)
            {
                low += ((float)random.NextDouble() * 2f - 1f - low) * smoothing;
                raw[i] = low * gain;
            }

            // 끝부분을 시작부분에 겹쳐 반복 지점의 튐을 없앤다.
            float[] data = new float[length];
            for (int i = 0; i < length; i++)
            {
                float sample = raw[i];
                if (i < crossfade)
                {
                    float blend = i / (float)crossfade;
                    sample = Mathf.Lerp(raw[length + i], raw[i], blend);
                }
                if (toneHz > 0f)
                {
                    // 정수 주기로 맞춰 반복 지점에서 위상이 이어지게 한다.
                    float cycles = Mathf.Round(toneHz * seconds);
                    sample += Mathf.Sin(2f * Mathf.PI * cycles * i / length) * 0.25f;
                }
                data[i] = Mathf.Clamp(sample, -1f, 1f);
            }
            return Create(clipName, data);
        }

        static AudioClip Create(string clipName, float[] data)
        {
            AudioClip clip = AudioClip.Create(clipName, data.Length, 1, SampleRate, false);
            clip.SetData(data, 0);
            return clip;
        }
    }
}
