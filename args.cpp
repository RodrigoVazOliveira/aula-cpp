#include <iostream>
#include "pessoa.hpp"


void imprimir(Pessoa** pessoas, int length) { 
    Pessoa** prox = pessoas;
    int i = 0;
    while (i != length) {
        std::cout << "O endereco de pessoas é:" << (*prox)->getName() << std::endl;
        prox++;
        i++;
    }
}


int main(int argc, char *argv[]) {
    Pessoa** pessoas = new Pessoa*[3];
    pessoas[0] = new Pessoa("Rodrigo Vaz", "432343432", 12);
    pessoas[1] = new Pessoa("Valkiria", "213423432", 15);
    pessoas[2] = new Pessoa("Priscila", "12312312", 26);
    

    imprimir(pessoas, 3);

    
    for (int i = 0; i < 3; i++)
        delete pessoas[i];

    delete[] pessoas;

    return 9;
}
