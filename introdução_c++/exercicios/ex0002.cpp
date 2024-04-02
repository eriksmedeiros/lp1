#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float count = 0, sum = 0;

    for (int i = 0; i < 4; i++)
    {
        cout << "Digite a [" << i + 1 << "º] nota: ";
        cin >> count;
        sum += count;
    }

    float media = sum / 4.0;

    cout.precision(2);
    cout << fixed;

    cout << "Média: " << media << endl;

    return 0;
}