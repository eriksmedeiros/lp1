#include "temp.h"

int main(){
    Tempo t1 = {3, 35};
    Tempo t2 = {2, 40};
    Tempo t3 = {5, 55};
    Tempo t4;

    t1.Exibir();

    cout << endl;

    t2.Exibir();

    cout << endl;

    t3.Exibir();

    cout << endl;

    t4 += t1;
    t4.Exibir();

    cout << endl;


    return 0;
}