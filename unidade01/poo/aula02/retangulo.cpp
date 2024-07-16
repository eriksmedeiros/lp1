#include "retangulo.h"

int Retangulo::angulo = 90;

Retangulo::Retangulo(Retangulo &r){
    largura = r.getLargura();
    altura = r.getAltura();
    std::cout << "Construtor de cópia criado" << std::endl; 
}

Retangulo::Retangulo(){
    largura = 0;
    altura = 0;
    std::cout << "construtor padrão criado" << std::endl;
}

Retangulo::Retangulo(int l, int a) : largura(l), altura(a){
    std::cout << "Objeto destruído" << std::endl;

}                       

/*Retangulo::Retangulo(int l, int a){
    largura = l;
    altura = a;
    std::cout << "construtor com argumentos criado" << std::endl;
}*/

Retangulo::~Retangulo(){
    std::cout << "destrutor acionado " << std::endl;
}

int Retangulo::getAngulo(){
    return angulo;
}

void Retangulo::setAngulo(int newAngulo){
    angulo = newAngulo;
}

int Retangulo::area(){
    return largura*altura;
}

int Retangulo::perimetro(){
    return (2*largura + 2*altura);
}

void Retangulo::setLargura(int valor){
    largura = valor;
}

void Retangulo::setAltura(int valor){
    altura = valor;
}

int Retangulo::getLargura(){
    return largura;
}

int Retangulo::getAltura(){
    return altura;
}