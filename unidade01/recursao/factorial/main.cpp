#include <iostream>
#include "primo.h"

using namespace std;

int main()
{
    int value;
    cout << "Digite o valor: ";
    cin >> value;

    int result = primalidade(value);

    cout << "O maior primo é: " << result << endl;

    return 0;
}