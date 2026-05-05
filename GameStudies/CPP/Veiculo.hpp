#pragma once

class Veiculo {
protected:
    float velocidade;

public:
    Veiculo(float velocidade);

    virtual void mover(float dx, float dy);
};