#include "Quest.hpp"

Quest::Quest(std::string alvo, int objetivo) {
    this->alvo = alvo;
    this->objetivo = objetivo;
    progresso = 0;
    status = INATIVA;
}

void Quest::iniciar() {
    status = ATIVA;
}

void Quest::registrarKill(std::string tipo) {
    if (status != ATIVA) return;

    if (tipo == alvo) {
        progresso++;
    }

    if (progresso >= objetivo) {
        status = COMPLETA;
    }
}

void Quest::finalizar() {
    status = ENTREGUE;
}

Status Quest::getStatus() {
    return status;
}