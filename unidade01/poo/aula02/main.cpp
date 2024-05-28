#include <iostream>
#include "retangulo.h"

int main(){

    Retangulo r(10, 5), q(3, 2);
    
    std::cout << "Angulo r: " << r.getAngulo() << "Angulo q: " << q.getAngulo() << std::endl;

    Retangulo::setAngulo(180);

    std::cout << "Angulo r: " << r.getAngulo() << "Angulo q: " << q.getAngulo() << std::endl;

    return 0;
}