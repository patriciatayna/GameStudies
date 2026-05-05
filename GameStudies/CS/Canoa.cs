using UnityEngine;

public class Canoa : Veiculo
{
    public int capacidade = 2;
    public bool emAgua = true;

    public void Remar(Vector2 direcao)
    {
        if (emAgua)
        {
            Mover(direcao);
        }
        else
        {
            Debug.Log("A canoa não está na água!");
        }
    }

    public override void Info()
    {
        Debug.Log("Canoa - Capacidade: " + capacidade);
    }
}