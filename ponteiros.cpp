#include <iostream>

void adicionar_valor(int* vetor, int position) {
    *(vetor + position) = 400;
}

int main(int argc, char *argv[])  {
    
    int* vetor = new int[10];
    *(vetor) = 100;
    *(vetor + 1) = 200;
    *(vetor + 2) = 300;
    
    adicionar_valor(vetor, 3);

    std::cout << "O valor da posição 0 é " << *vetor << std::endl;
    std::cout << "O valor da posição 1 é " << *(vetor + 1) << std::endl;
    std::cout << "O valor da posição 2 é " << *(vetor + 2) << std::endl;
    std::cout << "O valor da posição 3 é " << *(vetor + 3) << std::endl;

    delete [] vetor;
    vetor = NULL;
    return 0;
}
