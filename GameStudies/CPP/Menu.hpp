#pragma once
#include <vector>
#include <string>

class Menu {
private:
    std::vector<std::string> opcoes;

public:
    void adicionarOpcao(std::string opcao);
    void mostrar();
};