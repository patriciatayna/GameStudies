using System;
using System.Collections.Generic;

public class Menu
{
    private List<string> opcoes = new List<string>();

    public void AdicionarOpcao(string opcao)
    {
        opcoes.Add(opcao);
    }

    public void Mostrar()
    {
        Console.WriteLine("\n=== MENU ===");
        for (int i = 0; i < opcoes.Count; i++)
        {
            Console.WriteLine(i + " - " + opcoes[i]);
        }
    }

    public int Escolher()
    {
        return int.Parse(Console.ReadLine());
    }
}