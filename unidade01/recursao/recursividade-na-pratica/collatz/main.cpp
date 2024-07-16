#include <iostream>

using namespace std;

int collatz(int x)
{
    cout << x << " ";

    // passo base
    if (x == 1)
    {
        cout << endl;
        return 0;
    }
    // passo recursivo
    else if (x % 2 == 0)
    {
        return 1 + collatz(x / 2);
    }
    // passo recursivo
    else
    {
        return 1 + collatz(3 * x + 1);
    }
}

int main()
{

    int n;
    cout << "Informe um número qualquer: ";
    cin >> n;

    int steps = collatz(n);
    cout << "Passos para collatz(" << n << ") = " << steps << endl;

    return 0;
}