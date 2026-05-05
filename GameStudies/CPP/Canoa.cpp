#include "Canoa.hpp"
#include <iostream>

Canoa::Canoa() : Veiculo(2.0f) {
    capacidade = 2;
}

void Canoa::remar() {
    std::cout << "Remando...\n";
}