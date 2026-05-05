#include "Inimigo.hpp"

Inimigo::Inimigo(std::string nome, std::string tipo)
    : Personagem(nome) {
    this->tipo = tipo;
}

void Inimigo::morrer(Quest& quest) {
    quest.registrarKill(tipo);
}