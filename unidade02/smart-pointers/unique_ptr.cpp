#include <iostream>
#include <memory>

using namespace std;

class Foo{
    float x, y;
public:
    Foo(float x, float y) {
        cout << "construtor: nasceu!" << endl;
        this->x = x;
        this->y = y;
    }

    ~Foo(){
        cout << "destrutor: morreu!" << endl;
    }

    float prod(){
        return x*y;
    }
};

int main(){
    unique_ptr<int> x(new int);
    *x = 3;

    cout << "*x = " << *x << endl;
    cout << "addr x = " << x.get() << endl;

    unique_ptr<int> z = move(x);
    cout << "addr x = " << x.get() << endl;
    cout << "addr z = " << z.get() << endl;
    cout << endl;

    unique_ptr<int[]> y(new int[20]);
    y[2] = 4;
    cout << "y[2] = " << y[2] << std::endl;
    cout << "addr = " << y.get() << std::endl;

    unique_ptr<Foo> p1(new Foo(3, 4));
    cout << "produto = " << p1->prod() << endl;

    return 0;
}