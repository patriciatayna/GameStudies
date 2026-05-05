#pragma once
#include "Veiculo.hpp"

class Canoa : public Veiculo {
private:
    int capacidade;

public:
    Canoa();

    void remar();
};