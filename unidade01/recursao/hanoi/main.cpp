#include <iostream>

using namespace std;

int hanoi(int numDiscs, char origin, char destiny, char auxiliary)
{
    if (numDiscs == 0)
    {
        return;
    }

    hanoi(numDiscs - 1, origin, auxiliary, destiny);
    cout << "Mova o disco de " << origin << " para " << destiny << endl;
    hanoi(numDiscs - 1, auxiliary, destiny, origin);
}

int main()
{

    int nDiscs = 0;
    cout << "Informe o número de discos da Torre de Hanoi (A, B, C): ";
    cin >> nDiscs;

    hanoi(nDiscs, 'A', 'B', 'C');

    return 0;
}