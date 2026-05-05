using UnityEngine;

public class NPC : Personagem
{
    public string funcao; // vendedor, guia, etc.
    public bool hostil = false;

    public void Interagir()
    {
        if (hostil)
        {
            Debug.Log(Nome + " é hostil!");
        }
        else
        {
            Falar(0);
        }
    }

    public void TornarHostil()
    {
        hostil = true;
    }
}