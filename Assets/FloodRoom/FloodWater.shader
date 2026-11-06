Shader "FloodRoom/Water"
{
    Properties
    {
        _BaseColor("Water Tint", Color) = (0.10, 0.23, 0.20, 0.64)
        [HideInInspector] _WaterMode("Surface / Jet / Spray", Float) = 0
        [HideInInspector] _Flow("Inlet Flow", Vector) = (0, -1.17, 0.65, 0.5)
    }
    SubShader
    {
        Tags { "RenderPipeline" = "UniversalPipeline" "Queue" = "Transparent" "RenderType" = "Transparent" }
        Pass
        {
            Tags { "LightMode" = "UniversalForward" }
            Blend SrcAlpha OneMinusSrcAlpha
            ZWrite Off
            Cull Off

            HLSLPROGRAM
            #pragma vertex Vert
            #pragma fragment Frag
            #pragma multi_compile_instancing
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"

            CBUFFER_START(UnityPerMaterial)
                half4 _BaseColor;
                float4 _Flow; // inlet XZ, strength, normalized depth
                float _WaterMode;
                float4 _LampPosition;
                half4 _LampColor;
                float4 _BeamPosition;
                half4 _BeamColor;
                float4 _BeamDirection;
            CBUFFER_END

            struct Attributes
            {
                float3 positionOS : POSITION;
                float3 normalOS : NORMAL;
                float2 uv : TEXCOORD0;
                half4 color : COLOR;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct Varyings
            {
                float4 positionCS : SV_POSITION;
                float3 positionWS : TEXCOORD0;
                half3 normalWS : TEXCOORD1;
                float2 uv : TEXCOORD2;
                half topFace : TEXCOORD3;
                half4 color : COLOR;
                UNITY_VERTEX_OUTPUT_STEREO
            };

            Varyings Vert(Attributes input)
            {
                Varyings output = (Varyings)0;
                UNITY_SETUP_INSTANCE_ID(input);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(output);

                float3 positionWS = TransformObjectToWorld(input.positionOS);
                if (_WaterMode == 1)
                {
                    float fall = saturate(0.5 - input.positionOS.y * 0.5);
                    float pulse = sin(positionWS.y * 21.0 + _Time.y * 23.0);
                    positionWS.xz += input.positionOS.xz * (0.015 + fall * 0.04) * pulse;
                    positionWS.z += fall * fall * 0.025;
                }
                output.positionCS = TransformWorldToHClip(positionWS);
                output.positionWS = positionWS;
                output.normalWS = TransformObjectToWorldNormal(input.normalOS);
                output.topFace = input.normalOS.y;
                output.uv = input.uv;
                output.color = input.color;
                return output;
            }

            half3 Highlight(float3 position, half3 normal, half3 view, float4 source,
                half3 color, float cone)
            {
                float3 offset = source.xyz - position;
                float distanceSq = dot(offset, offset);
                half3 toLight = offset * rsqrt(max(distanceSq, 0.0001));
                half3 halfway = SafeNormalize(toLight + view);
                half rangeFade = saturate(1.0 - distanceSq * source.w);
                half attenuation = cone * rangeFade * rangeFade / (1.0 + distanceSq);
                half specular = pow(saturate(dot(normal, halfway)), 52.0);
                return color * attenuation * (0.24 + 0.32 * saturate(dot(normal, toLight)) + 2.2 * specular);
            }

            half4 Frag(Varyings input, FRONT_FACE_TYPE face : FRONT_FACE_SEMANTIC) : SV_Target
            {
                UNITY_SETUP_STEREO_EYE_INDEX_POST_VERTEX(input);
                float3 position = input.positionWS;
                half3 view = SafeNormalize(GetWorldSpaceViewDir(position));
                half3 normal = normalize(input.normalWS);
                float time = _Time.y;
                half foam = 0;
                half alpha = _BaseColor.a;

                if (_WaterMode == 2)
                {
                    float2 drop = (input.uv - 0.5) * 2.0;
                    alpha = input.color.a * (1.0 - smoothstep(0.1, 1.0, dot(drop, drop)));
                    normal = view;
                    foam = 0.7;
                }
                else if (_WaterMode == 1)
                {
                    // Fine strands run downward faster than the wider turbulent pulses.
                    float swirl = sin(position.y * 17.0 + time * 13.0);
                    float strands = sin(input.uv.x * 37.7 + position.y * 8.0 + time * 10.0 + swirl);
                    float pulse = sin(position.y * 31.0 + time * 36.0 + input.uv.x * 18.85);
                    foam = smoothstep(0.30, 0.90, strands * 0.4 + pulse * 0.35 + swirl * 0.25);
                    alpha *= lerp(0.58, 1.08, foam);
                }
                else
                {
                    // Shade only the top of the original thin box, from either side.
                    clip(input.topFace - 0.5);
                    float2 fromInlet = position.xz - _Flow.xy - float2(0.0, 0.025);
                    float distanceFromInlet = length(fromInlet);
                    float waveA = dot(position.xz, float2(12.0, 7.0)) - time * 3.3;
                    float waveB = dot(position.xz, float2(-19.0, 15.0)) - time * 5.5;
                    float ring = distanceFromInlet * 42.0 - time * 12.0;
                    float ringFalloff = _Flow.z / (1.0 + 5.0 * distanceFromInlet);
                    float fineWave = dot(position.xz, float2(37.0, -46.0)) + time * 8.0;
                    float2 slope = float2(0.12, 0.07) * cos(waveA)
                        + float2(-0.09, 0.08) * cos(waveB)
                        + float2(0.048, -0.058) * cos(fineWave + 0.8 * sin(waveA))
                        + fromInlet / max(distanceFromInlet, 0.01) * cos(ring) * ringFalloff * 0.65;
                    normal = normalize(half3(-slope.x, 1.0, -slope.y))
                        * IS_FRONT_VFACE(face, 1.0, -1.0);

                    float2 wallUV = min(input.uv, 1.0 - input.uv);
                    float wallDistance = min(wallUV.x, wallUV.y);
                    half brokenEdge = smoothstep(-0.55, 0.8, sin(waveA * 3.0) * cos(waveB * 2.0));
                    foam = (1.0 - smoothstep(0.001, 0.014, wallDistance)) * brokenEdge * 0.38;
                    foam += (1.0 - smoothstep(0.04, 0.26, distanceFromInlet))
                        * _Flow.z * smoothstep(0.15, 0.92, sin(ring + sin(waveB * 2.0)));
                    alpha *= lerp(0.60, 1.18, _Flow.w);
                }

                half fresnel = pow(1.0 - saturate(dot(normal, view)), 4.0);
                float3 beamToSurface = SafeNormalize(position - _BeamPosition.xyz);
                float beamCone = smoothstep(_BeamDirection.w, min(1.0, _BeamDirection.w + 0.04),
                    dot(beamToSurface, _BeamDirection.xyz));
                half3 lighting = Highlight(position, normal, view, _LampPosition, _LampColor.rgb, 1.0)
                    + Highlight(position, normal, view, _BeamPosition, _BeamColor.rgb, beamCone);
                half3 tint = lerp(_BaseColor.rgb, half3(0.58, 0.68, 0.63), saturate(foam));
                half3 color = tint * (0.18 + lighting) + lighting * (0.16 + 0.25 * fresnel);
                return half4(color, saturate(alpha + fresnel * 0.18));
            }
            ENDHLSL
        }
    }
}

