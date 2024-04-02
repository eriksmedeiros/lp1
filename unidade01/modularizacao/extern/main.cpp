#include <iostream>

int readNumber();
void writeAnswer(int x);

using namespace std;

int main()
{
    writeAnswer(readNumber());

    return 0;
}