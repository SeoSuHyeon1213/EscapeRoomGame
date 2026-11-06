using UnityEngine;

namespace FloodRoom
{
    /// <summary>손에서 놓친 물건이 물속에 가라앉아 게임이 막히지 않도록 수면으로 띄운다.</summary>
    [RequireComponent(typeof(Rigidbody))]
    public class FloatingItem : MonoBehaviour
    {
        const float Buoyancy = 16f;
        const float WaterDrag = 3f;

        Rigidbody body;

        void Awake() => body = GetComponent<Rigidbody>();

        void FixedUpdate()
        {
            FloodRoomGame game = FloodRoomGame.Instance;
            if (game == null || body.isKinematic || transform.position.y >= game.WaterLevel) return;

            body.AddForce(Vector3.up * Buoyancy, ForceMode.Acceleration);
            body.AddForce(-body.linearVelocity * WaterDrag, ForceMode.Acceleration);
        }
    }
}
