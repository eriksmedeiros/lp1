#include <iostream>
#include <cmath>

using namespace std;

class Cubo{
private:
    double aresta;

public:
    Cubo(double a);

    double area(double a);
    double volume(double a);

    void setAresta(double newAresta){
        aresta = newAresta;
    }
    double getAresta(){
        return aresta;
    }
};