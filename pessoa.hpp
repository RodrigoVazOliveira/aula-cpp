class Pessoa {
    private:
        const char *name;
        const char *cpf;
        const int age;

    public:
        Pessoa(const char *name_value, 
               const char *cpf_value, 
               const int age_value) 
            : name(name_value),  
              cpf(cpf_value), 
              age(age_value) {}

       const char* getName() const {
            return name;
        }

        const char* getCpf() const {
            return cpf;
        }

        int getAge() const {
            return age;
        }
};
