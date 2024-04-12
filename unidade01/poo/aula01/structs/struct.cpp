#include <iostream>

typedef struct {
    int largura;
    int altura;
} Retangulo;

int area(Retangulo r){
    return r.largura*r.altura;
}

int perimetro(Retangulo r){
    return (2 * r.largura + 2 * r.altura);
}

int main(){

    Retangulo r;

    r.largura = 7;
    r.altura = 5;

    std::cout << "Área do retângulo: " << area(r) << std::endl; 
    std::cout << "Perímetro do retângulo: " << perimetro(r) << std::endl;

    return 0;
}