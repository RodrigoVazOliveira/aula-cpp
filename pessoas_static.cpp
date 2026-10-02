#include <iostream>
#include "pessoa.hpp"

int main(int argc, char *argv[]) {
    const Pessoa pessoas[3] = {
        Pessoa("Filo", "12341312", 23),
        Pessoa("Naofome", "123122", 32),
        Pessoa("Matheus", "13434223", 32)
    };

    for (int i = 0; i < 3; i++) {
        std::cout << "Pessoa número: " << i << std::endl;
        std::cout << "Nome da pessoa: " << pessoas[i].getName() << std::endl;
        std::cout << "idade: " << pessoas[i].getAge() << std::endl;
        std::cout << "CPF: " << pessoas[i].getCpf() << std::endl << std::endl;
    }
    
    return 0;
}
