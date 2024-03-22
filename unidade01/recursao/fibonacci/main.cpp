#include <iostream>

using namespace std;

int sequenceFibonacci(int x)
{
    // passo base
    if (x == 0)
    {
        return x;
    }
    // passo base
    else if (x == 1)
    {
        return x;
    }
    // passo recursivo
    else
    {
        return (sequenceFibonacci(x - 1) + sequenceFibonacci(x - 2));
    }
}

int main()
{

    int n;
    cout << "Informe o n-esimo termo: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << sequenceFibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}