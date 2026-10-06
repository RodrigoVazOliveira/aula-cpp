#include <iostream>
#include <string>

class People {
private:
  const std::string name;
  const int age;

public:
  People(const std::string name, const int age) : name(name), age(age) {}

  std::string get_name() const { return name; }
  int get_age() const { return age; }

  ~People() { std::cout << "Deletando classe" << std::endl; }
};

int main(int argc, char *argv[]) {
  std::string name;
  int age;

  std::cout << "Digite o nome e a idade: " << std::endl;
  std::cin >> name;
  std::cin >> age;

  People people = People(name, age);

  std::cout << "Imprimir objeto: " << std::endl
            << "Nome: " << people.get_name() << std::endl
            << "Idade: " << people.get_age() << std::endl;

  return 0;
}
