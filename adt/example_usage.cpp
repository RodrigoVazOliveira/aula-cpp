#include <iostream>
#include "stack.hpp"

int main(int argc, char *argv[]) {
    std::cout << "Inicio do exemplo\n";

    Stack stack  = Stack();

    std::cout << "Tamanho inicial da pilha: " << stack.size() << "\n";
    return 0;
}
