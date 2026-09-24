#include <iostream>
#include "pessoa.hpp"

int main(int argc, char *argv[]) {
    Pessoa pessoa = Pessoa("Rodrigo Vaz", "00203203", 12);
    std::cout << "O endereco de pessoas é:" << pessoa.getName() << std::endl;
    std::cout << "Imprimir endereco" << &pessoa << std::endl;

    return 9;
}
