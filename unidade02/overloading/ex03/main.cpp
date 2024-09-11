#include <iostream>
#include <complex>
using namespace std;

class Math{

public:
    int add(int a, int b){
        return a + b;
    }

    double add(double a, double b){
        return a + b;
    }

    complex<double> add(complex<double> a, complex<double>b){
        return a + b;
    }

};

int main(){
    Math math;

    cout << "Soma de inteiros: " << math.add(5, 9) << endl;

    cout << "Soma de doubles: " << math.add(5.5, 6.6) << endl;

    cout << "Soma de complexos: " << math.add(complex<double>(3,4), complex<double>(1,2)) << endl;

    return 0;
}