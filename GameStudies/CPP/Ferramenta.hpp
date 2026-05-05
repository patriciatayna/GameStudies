#pragma once
#include <string>

class Ferramenta {
private:
    std::string nome;
    int durabilidade;

public:
    Ferramenta(std::string nome);

    void usar();
};