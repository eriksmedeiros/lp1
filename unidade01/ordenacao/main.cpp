#include <iostream>
#include <vector>
#include "order.h"

using namespace std;

int main()
{
    int size;
    cout << "Digite a quantidade de elementos: ";
    cin >> size;

    vector<int> sequence(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Digite o " << i + 1 << "o elemento: ";
        cin >> sequence[i];
    }

    cout << orderCheck(sequence) << endl;
}