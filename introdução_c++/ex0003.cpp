#include <iostream>

using namespace std;

int metersTocentimeters(int x)
{
    return x * 100;
}

int main()
{
    int meters;

    cout << "Digite o valor em Metros(m): ";
    cin >> meters;

    int cent = metersTocentimeters(meters);

    cout << cent << "cm" << endl;
    return 0;
}