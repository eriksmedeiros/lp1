#include <iostream>
#include <vector>

using namespace std;

int search(int k, const vector<int> &elementos, int size)
{
    int i = 0;
    do
    {
        if (k == elementos[i])
        {
            return i;
        }
        else if (k < elementos[i])
        {
            return -1;
        }
        i++;
    } while (i < size);
    return -1;
}