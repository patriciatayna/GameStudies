#include "NPC.hpp"
#include <iostream>

NPC::NPC(std::string nome) : Personagem(nome) {}

void NPC::adicionarDialogo(std::string fala) {
    dialogos.push_back(fala);
}

void NPC::setQuest(Quest* q) {
    quest = q;
}

void NPC::interagir() {
    if (quest->getStatus() == INATIVA) {
        std::cout << "Aceite esta missão!\n";
        quest->iniciar();
    }
    else if (quest->getStatus() == COMPLETA) {
        std::cout << "Missão completa! Recompensa entregue.\n";
        quest->finalizar();
    }
}