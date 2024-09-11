#include <iostream>

using namespace std;

int main()
{

    int a, value, c = 0, aTotal = 0;

    while (1)
    {
        cin >> a;

        if (a == -1)
        {
            break;
        }

        cin >> value;

        aTotal += a;

        c = c + a * value;
    }

    cout << aTotal << " " << c << endl;

    return 0;
}