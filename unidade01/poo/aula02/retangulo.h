#include <iostream>

class Retangulo {
    
    int largura;
    int altura;
    static int angulo;

public:
    // construtor padrão
    Retangulo();

    /* contrutor com argumentos
    Retangulo(int l, int a);*/

    // lista inicializadora de membros
    Retangulo(int l, int a);

    // contrutor copia
    Retangulo(Retangulo &r);

    ~Retangulo();

    static int getAngulo();

    static void setAngulo(int newAngulo);

    int area();

    int perimetro();

    void setLargura(int valor);

    void setAltura(int valor);

    int getLargura();

    int getAltura();
};
