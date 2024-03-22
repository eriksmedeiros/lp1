#include <iostream>

using namespace std;

int sum(int x, int y)
{
    return x + y;
}

int main()
{

    int x, y;

    cout << "Digite o 1º valor: ";
    cin >> x;
    cout << "Digite o 2º valor: ";
    cin >> y;

    int result = sum(x, y);

    cout << "O resultado da soma é: " << result << endl;

    return 0;
}