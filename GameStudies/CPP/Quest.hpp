#pragma once
#include <string>

enum Status { INATIVA, ATIVA, COMPLETA, ENTREGUE };

class Quest {
private:
    std::string alvo;

public:
    int progresso;
    int objetivo;
    Status status;

    Quest(std::string alvo, int objetivo);

    void iniciar();
    void registrarKill(std::string tipo);
    void finalizar();

    Status getStatus();
};