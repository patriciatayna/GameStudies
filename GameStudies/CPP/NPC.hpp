#pragma once
#include "Personagem.hpp"
#include "Quest.hpp"
#include <vector>

class NPC : public Personagem {
private:
    std::vector<std::string> dialogos;
    Quest* quest;

public:
    NPC(std::string nome);

    void adicionarDialogo(std::string fala);
    void interagir();
    void setQuest(Quest* q);
};