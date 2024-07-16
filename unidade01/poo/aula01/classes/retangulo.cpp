#include "retangulo.h"

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