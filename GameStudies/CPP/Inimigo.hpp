#pragma once
#include "Personagem.hpp"
#include "Quest.hpp"

class Inimigo : public Personagem {
private:
    std::string tipo;

public:
    Inimigo(std::string nome, std::string tipo);

    void morrer(Quest& quest);
};