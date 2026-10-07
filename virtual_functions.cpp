#include <iostream>

class Mother { 
    public:
        virtual void show_message() {
            std::cout << "Olá, sou classe mãe." << std::endl;
        }
};

class Daughter : public Mother {
    public:
        virtual void show_message() {
            std::cout << "Olá, essa é a classe filha." << std::endl;
        }

};

void show(Mother *mother) {
    mother->show_message();
}

int main(int argc, char *argv[]) { 
    Mother mother;
    Daughter Daughter;

    show(&mother);
    show(&Daughter); 
    
    return 0;
}
