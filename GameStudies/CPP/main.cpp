#include "NPC.hpp"
#include "Inimigo.hpp"
#include "Quest.hpp"

int main() {
    Quest quest("Caranguejo", 3);

    NPC npc("Velho");
    npc.setQuest(&quest);

    Inimigo caranguejo("Caranguejo1", "Caranguejo");

    npc.interagir();

    caranguejo.morrer(quest);
    caranguejo.morrer(quest);
    caranguejo.morrer(quest);

    npc.interagir();

    return 0;
}