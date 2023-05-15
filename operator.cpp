#include <iostream>

class Pessoa
{
private:
    int idade;
    std::string nome;
public:
    Pessoa():
        idade(0),
        nome("")
        {};
    Pessoa(int idade, std::string nome):
        idade(idade),
        nome(nome)
        {};
    Pessoa operator +(Pessoa &other){
        return Pessoa(this->idade + other.idade, this->nome + " " + other.nome);
    }
    operator int() const{
        return idade;
    };
    operator std::string() const{
        return nome;
    };
    int getIdade() const{
        return idade;
    }
    std::string getNome() const{
        return nome;
    }
};

int main()
{
    Pessoa p1(30, "Pedro");
    Pessoa p2(23, "Mat");
    Pessoa p3 = p1 + p2;
    std::string nome = p3;
    int idade = p3;
    std::cout << nome << std::endl;
    std::cout << idade << std::endl;
    return 0;
}
