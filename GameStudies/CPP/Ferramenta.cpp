#include "Ferramenta.hpp"
#include <iostream>

Ferramenta::Ferramenta(std::string nome) {
    this->nome = nome;
    durabilidade = 100;
}

void Ferramenta::usar() {
    if (durabilidade > 0) {
        durabilidade--;
        std::cout << nome << " usada\n";
    }
}