using UnityEngine;

public class Ferramenta
{
    public string Nome;
    public int Durabilidade = 100;
    public int Poder;

    public Ferramenta(string nome, int poder)
    {
        Nome = nome;
        Poder = poder;
    }

    public void Usar()
    {
        if (Durabilidade > 0)
        {
            Durabilidade--;
            Debug.Log(Nome + " usada! Durabilidade: " + Durabilidade);
        }
        else
        {
            Debug.Log(Nome + " está quebrada!");
        }
    }
}