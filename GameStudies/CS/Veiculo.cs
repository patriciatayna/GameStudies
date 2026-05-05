using UnityEngine;

public class Veiculo : MonoBehaviour
{
    public float velocidade = 5f;

    public virtual void Mover(Vector2 direcao)
    {
        transform.Translate(direcao * velocidade * Time.deltaTime);
    }

    public virtual void Info()
    {
        Debug.Log("Veículo genérico");
    }
}