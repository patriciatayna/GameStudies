using System.Collections.Generic;
using UnityEngine;

public class Personagem : MonoBehaviour
{
    public string Nome;

    public int Vida = 100;
    public int Energia = 50;

    public float velocidade = 5f;

    private List<string> dialogos = new List<string>();

    private List<string> missoes = new List<string>();

    void Update()
    {
        Movimentar();
    }

    void Movimentar()
    {
        float dx = Input.GetAxis("Horizontal");
        float dy = Input.GetAxis("Vertical");

        Vector2 movimento = new Vector2(dx, dy);
        transform.Translate(movimento * velocidade * Time.deltaTime);
    }

    public void AdicionarDialogo(string fala)
    {
        dialogos.Add(fala);
    }

    public void Falar(int index)
    {
        if (index >= 0 && index < dialogos.Count)
        {
            Debug.Log(Nome + ": " + dialogos[index]);
        }
    }

    public void AdicionarMissao(string missao)
    {
        missoes.Add(missao);
    }

    public void ListarMissoes()
    {
        foreach (var m in missoes)
        {
            Debug.Log(m);
        }
    }

    public void Atacar(Personagem alvo)
    {
        int dano = 10;
        alvo.TomarDano(dano);
    }

    public void TomarDano(int dano)
    {
        Vida -= dano;
        if (Vida < 0) Vida = 0;
    }
}