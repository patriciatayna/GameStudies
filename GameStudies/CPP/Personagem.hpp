#pragma once
#include <string>

class Personagem {
protected:
    std::string nome;
    int vida;
    float x, y;

public:
    Personagem(std::string nome);

    void mover(float dx, float dy);
    void tomarDano(int dano);

    std::string getNome();
};