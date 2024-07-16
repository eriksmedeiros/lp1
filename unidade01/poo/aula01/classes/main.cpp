#include <iostream>
#include "retangulo.h"

int main(){

    Retangulo r;

    r.setLargura(8);
    r.setAltura(10);

    std::cout << "Largura do retângulo: " << r.getLargura() << std::endl;
    std::cout << "Altura do retângulo: " << r.getAltura() << std::endl;


    std::cout << "Área do retângulo: " << r.area() << std::endl; 
    std::cout << "Perímetro do retângulo: " << r.perimetro() << std::endl;

    return 0;
}