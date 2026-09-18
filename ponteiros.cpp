#include <iostream>

int main()  {
    
    int* vetor = new int[10];
    *(vetor) = 100;
    *(vetor + 1) = 200;
    *(vetor + 2) = 300;


    std::cout << "O valor da posição 0 é " << *vetor << std::endl;
    std::cout << "O valor da posição 1 é " << *(vetor + 1) << std::endl;
    std::cout << "O valor da posição 2 é " << *(vetor + 2) << std::endl;


    delete [] vetor;
    return 0;
}
