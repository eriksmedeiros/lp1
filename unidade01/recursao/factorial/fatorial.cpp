#include <iostream>
#include "fatorial.h"

using namespace std;

int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}