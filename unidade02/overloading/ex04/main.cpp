#include <iostream>

using namespace std;

class Vector2D{
    double x;
    double y;

public:
    Vector2D(double x, double y) : x(x), y(y) {}
    ~Vector2D() {}

    Vector2D operator+(const Vector2D &v) const{
        return Vector2D(this->x + v.x, this->y + v.y);
    }

    Vector2D operator-(const Vector2D &v) const{
        return Vector2D(this->x - v.x, this->y - v.y);
    }

    Vector2D operator*(int value) const{
        return Vector2D(this->x * value, this->y * value);
    }

    friend ostream& operator<<(ostream& os, const Vector2D &v) {
        os << "(" << v.x << ", " << v.y << ")" << endl;
        return os;
    }
};

int main(){
    Vector2D v1(3, 4), v2(1, 2);

    Vector2D sum = v1 + v2;
    Vector2D diff = v1 - v2;
    Vector2D scaled = v1 * 2;

    // corrigir operator<<
    cout << "Vetor 1: " << v1 << endl;
    cout << "Vetor 2: " << v2 << endl;
    cout << "Soma: " << sum << endl;
    cout << "Diferença: " << diff << endl;
    cout << "Escalado: " << scaled << endl;

    return 0;
}