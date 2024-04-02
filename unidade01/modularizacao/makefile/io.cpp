#include <iostream>
#include "io.hpp"

using namespace std;

int readNumber()
{
    int x;
    cout << "Digite um número: ";
    cin >> x;
    return x;
}

void writeAnswer(int x)
{
    int r = x + readNumber();
    cout << "O resultado da soma é: " << r << endl;
}