#include <iostream>
#include "fatorial.h"

using namespace std;

int primalidade(int value)
{
    int fatorial = factorial(value);
    int max = 0;

    for (int i = 1; i < fatorial; i++)
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

    return max;
}