#include <iostream>

class Fracao{
    private:
        int numerador;
        int denominador;
    public:
        Fracao():
            numerador(0),
            denominador(0)
        {}
        Fracao(int numerador, int denominador):
            numerador(numerador),
            denominador(denominador)
        {}
        int getNumerador() const{
            return numerador;
        }
        int getDenominador() const{
            return denominador;
        }
        Fracao operator +(Fracao &other){
            int numerador = this->numerador*other.getDenominador() + this->denominador*other.getNumerador();
            int denominador = this->denominador*other.getDenominador();
            return Fracao(numerador, denominador);
        }
        Fracao operator -(Fracao &other){
            int numerador = this->numerador*other.getDenominador() - this->denominador*other.getNumerador();
            int denominador = this->denominador*other.getDenominador();
            return Fracao(numerador, denominador);
        }
        Fracao operator *(Fracao &other){
            int numerador = this->numerador * other.getNumerador();
            int denominador = this->denominador * other.getDenominador();
            return Fracao(numerador, denominador);
        }
        Fracao operator /(Fracao &other){
            int numerador = this->numerador * other.getDenominador();
            int denominador = this->denominador * other.getNumerador();
            return Fracao(numerador, denominador);
        }
        Fracao operator++(){
            Fracao maisum(1,1);
            *this = *this+maisum;
            return *this;
        }
        Fracao operator++(int){
            Fracao maisum(1,1);
            Fracao temp = *this;
            *this = *this+maisum;
            return temp;
        }
        Fracao operator--(){
            Fracao menosum(1,1);
            *this = *this - menosum;
            return *this;
        }
        Fracao operator--(int){
            Fracao menosum(1,1);
            Fracao temp = *this;
            *this = *this-menosum;
            return temp;
        }
        operator float() const{
            return (float)numerador/denominador;
        }
};

int main(){
    Fracao um(2,3);
    Fracao temp(1,3);
    Fracao soma = um + temp;
    Fracao sub = um - temp;
    Fracao mul = um * temp;
    Fracao div = um / temp;
    std::cout << soma.getNumerador() << "/" << soma.getDenominador() << (char)10;
    std::cout << (float)soma << (char)10;
    std::cout << sub.getNumerador() << "/" << sub.getDenominador() << (char)10;
    std::cout << (float)sub << (char)10;
    std::cout << mul.getNumerador() << "/" << mul.getDenominador() << (char)10;
    std::cout << (float)mul << (char)10;
    std::cout << div.getNumerador() << "/" << div.getDenominador() << (char)10;
    std::cout << (float)div << (char)10;
    std::cout << "EITAEITAEITA\n";
    std::cout << um.getNumerador() << "/" << um.getDenominador() << (char)10;
    um--;
    std::cout << um.getNumerador() << "/" << um.getDenominador() << (char)10;
    --um;
    std::cout << um.getNumerador() << "/" << um.getDenominador() << (char)10;
    return 0;
}