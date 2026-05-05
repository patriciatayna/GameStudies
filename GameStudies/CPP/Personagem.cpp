#include "Personagem.hpp"
#include <iostream>

Personagem::Personagem(std::string nome) {
    this->nome = nome;
    vida = 100;
    x = 0;
    y = 0;
}

void Personagem::mover(float dx, float dy) {
    x += dx;
    y += dy;
}

void Personagem::tomarDano(int dano) {
    vida -= dano;
    if (vida < 0) vida = 0;
}

std::string Personagem::getNome() {
    return nome;
}