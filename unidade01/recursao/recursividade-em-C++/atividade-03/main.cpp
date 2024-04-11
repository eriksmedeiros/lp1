#include <iostream>
#include "func.hpp"

bool verificaPrimo(int numero){
    int cont = 0;
    if(numero == 1)
        return 1;
    else{
        if((numero % verificaPrimo(numero-1)) == 1)
            cont++;
    }

    if(cont > 2)
        return false;
    else 
        return true;

}

int main() {

    int num;
    std::cout << "Entre com um número inteiro positivo: ";
    std::cin >> num;

    if(verificaPrimo(num))    
        std::cout << "O número " << num << " é primo." << std::endl;
    else
        std::cout << "O número " << num << " não é primo." << std::endl;

    return 0;   
}