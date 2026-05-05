#include "Menu.hpp"
#include <iostream>

void Menu::adicionarOpcao(std::string opcao) {
    opcoes.push_back(opcao);
}

void Menu::mostrar() {
    for (int i = 0; i < opcoes.size(); i++) {
        std::cout << i << " - " << opcoes[i] << "\n";
    }
}