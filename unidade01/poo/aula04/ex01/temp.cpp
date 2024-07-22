#include "temp.h"

using namespace std;

Tempo::Tempo(){
    this->horas = 0;
    this->min = 0;
}

Tempo::Tempo(int h, int m) : horas(h), min(m) {}

void Tempo::Adicionar(int h, int m){
    horas += h;
    min += m;

    // minutos excedentes viram horas
    horas += min / 60;
    min %= 60;
}

void Tempo::Resetar(int h, int m){
    horas = h;
    min = m;
}

Tempo Tempo::operator+(const Tempo &t) const{
    Tempo soma;
    soma.horas = horas + t.horas;
    soma.min = min + t.min;

    // minutos excedentes viram horas

    soma.horas += soma.min / 60;
    soma.min %= 60;

    return soma;
}

Tempo Tempo::operator-(const Tempo &t) const{
    Tempo sub;
    sub.horas = horas - t.horas;
    sub.min = min - t.min;

    // minutos excedentes viram horas
    sub.horas += sub.min / 60;
    sub.min %= 60;

    return sub;
}

Tempo Tempo::operator*(int value){
    Tempo mult;
    mult.horas = horas * value;
    mult.min = min * value;

    // minutos excedentes viram horas
    mult.horas += mult.min / 60;
    mult.min %= 60;

    return mult;
}



void Tempo::Exibir() const {
    cout << horas << " horas, " << min << " minutos";
}