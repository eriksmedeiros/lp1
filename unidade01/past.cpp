#include <iostream>

using namespace std;

int main()
{

    int value;
    cout << "Digite um valor inteiro: ";
    cin >> value;

    // inicializa o valor de máximo
    int max = 0;

    for (int i = 1; i < value; i++)
    {
        // contador que será reiniciado para cada interação de 'i'
        int count = 0;

        // loop para contar a quantidade de divisores de 'i'
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        // verifica se 'i' tem apenas dois divisores
        if (count < 2)
        {
            // verifica se 'i' é o maior valor
            if (i > max)
            {
                // se sim, max assume o valor de 'i'
                max = i;
            }
        }
    }

    cout << "O maior primo é: " << max << endl;

    return 0;
}