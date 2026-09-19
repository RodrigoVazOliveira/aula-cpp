#include <iostream>


int strlen(char *str) {
    int length_string = 0;

    while(*str != '\0') {
        str++;
        length_string++;
    }
    
    return length_string;
}

char* str_cat(char *dest, char *origin) {
    int length_dest = strlen(dest);
    int length_origin = strlen(origin);
    int length_result = length_dest + length_origin + 1;
    char* result = new char[length_result];
    char* aux = result;

    while(*dest != '\0') {
       *aux = *dest;
       dest++;
       aux++;
    }

    *aux = ' ';
    aux++;
    
    while(*origin != '\0') {
        *aux = *origin;
        aux++;
        origin++;
    }

    return result;
}

int main(int argc, char *argv[]) {
    char *name_one = new char[100];
    char *name_two = new char[100];
    
    std::cout << "Digite o primeiro nome: " << std::endl;
    std::cin.getline(name_one, 100);
    std::cout << "Digite seu sobrenme: " << std::endl;
    std::cin.getline(name_two, 100);

    char* name_complet = str_cat(name_one, name_two);

    std::cout << "O nome completo é " << name_complet << std::endl;
    

    delete [] name_one;
    delete [] name_two;
    delete [] name_complet;
    return 0;
}
