#include <iostream>
#include <string>

class Animal {

protected:
  std::string name;
  bool fly;
  int paws;

  Animal(const std::string name, const bool fly, const int paws) {
    this->name = name;
    this->fly = fly;
    this->paws = paws;
  }

public:  
  std::string get_name() const { return this->name; }
  bool get_fly() const { return this->fly; }
  int get_paws() const { return this->paws; }
};

class Dog : public Animal {

protected:
  int age;

public:
  Dog(const std::string name, const bool fly, const int paws, const int age)
      : Animal(name, fly, paws) {
    this->age = age;
  }

  int get_age() const { return this->age; }

  std::string to_string() const {
    return "Nome: " + name + " Voa?: " + std::to_string(fly) +
           " Quantas Patas? " + std::to_string(paws) +
           " Idade: " + std::to_string(age);
  }
};

int main(int argc, char *argv[]) {
  Dog dog = Dog("Luna", false, 4, 5);
  std::cout << dog.to_string() << std::endl;


  std::cout << "Nome do cachorro: " << dog.get_name() << std::endl;
  
  return 0;
}
