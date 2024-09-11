#include <iostream>

using namespace std;

class ComplexNumber{
private:
    double real, imaginary;

public:
    ComplexNumber(double real, double imaginary) : real(real), imaginary(imaginary) {}

    ComplexNumber add(const ComplexNumber& c) {
        return ComplexNumber(real + c.real, imaginary + c.imaginary);
    }

    ComplexNumber sub(const ComplexNumber& c) {
        return ComplexNumber(real - c.real, imaginary - c.imaginary);
    }

    bool operator==(const ComplexNumber& c) {
        return real == c.real && imaginary == c.imaginary; 
    }

    bool operator!=(const ComplexNumber& c) {
        return !(*this == c);
    }

    friend ostream& operator<<(ostream& os, const ComplexNumber& c) {
        os << c.real << " + " << c.imaginary << "i";
        return os;
    }
};

int main(){
    ComplexNumber c1(3, 4), c2(1, 2);

    ComplexNumber sum = c1.add(c2);
    ComplexNumber diff = c1.sub(c2);

    cout << "Complexo 1: " << c1 << endl;
    cout << "Complexo 2: " << c2 << endl;
    cout << "Soma: " << sum << endl;
    cout << "Diferença: " << diff << endl;
    cout << "c1 == c2: " << (c1 == c2) << endl;
    cout << "c1 != c2: " << (c1 != c2) << endl;

    return 0;
}