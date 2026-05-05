using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerItems : MonoBehaviour
{
    public static PlayerItems instance;

    [Header ("Quantidades")]
    [HideInInspector] public int carrots;
    public float currentWater;
    public int hours;
    public int plants;
    public int fishes;
    public int palhasDeTucum;
    public bool invisivel;

    [Header ("Limites")]

    public float waterLimit = 30;
    public float plantsLimit = 10;
    public float timeLimit = 12;
    public int fishesLimit = 5;
    public int palhasLimit = 5;
    public int invisibilidadeLimit = 1;

    void Start ()
    {
        instance = this;
    }

    public void WaterLimit(float water)
    {
        if (currentWater < waterLimit)
        {
            currentWater += water;
        }
    }
}
