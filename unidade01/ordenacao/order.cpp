#include <iostream>
#include <vector>
#include "order.h"

using namespace std;

string orderCheck(const vector<int> &elements)
{
    int acrescing = 1;
    int decrescing = 1;

    for (int i = 0; i < elements.size() - 1; i++)
    {
        if (elements[i] > elements[i + 1])
        {
            acrescing = 0;
            break;
        }
    }

    for (int i = 0; i < elements.size() - 1; i++)
    {
        if (elements[i] < elements[i + 1])
        {
            decrescing = 0;
            break;
        }
    }

    if (acrescing)
    {
        return "Lista ordenada de maneira crescente!";
    }
    else if (decrescing)
    {
        return "Lista ordenada de maneira decrescente!";
    }
    else
    {
        return "Lista desordenada!";
    }
}
