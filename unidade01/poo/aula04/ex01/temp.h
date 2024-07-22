#include <iostream>

using namespace std;

class Tempo
{
private:
    int horas;
    int min;

public:
    Tempo();
    Tempo(int h, int m = 0);

    void Adicionar(int h, int m);
    void Resetar(int h = 0, int m = 0);
    Tempo operator+(const Tempo &t) const;
    Tempo operator-(const Tempo &t) const;
    Tempo operator*(int value);

    void Exibir() const;
};