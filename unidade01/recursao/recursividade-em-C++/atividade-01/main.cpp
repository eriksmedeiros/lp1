#include <iostream>

int somaDigitos(int n);

int main() {
    int input;
    std::cout << "Entre com um número inteiro positivo: ";
    std::cin >> input;
    std::cout << "A soma dos digitos de " << input << " é " << somaDigitos(input) << std::endl;
}

int somaDigitos(int n) {
    // Implemente aqui seu algoritmo recursivo.

    int digito = n%10;

    if(digito == 0) return 0;
    else{
        return digito + somaDigitos(n/10);
    }
}