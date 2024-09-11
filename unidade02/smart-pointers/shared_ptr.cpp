#include <iostream>
#include <memory>
#include <thread>

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

void foo(std::shared_ptr<Foo> foo) {
    cout << "foo: " << foo.use_count() << endl;
}

int main(void) {
  shared_ptr<Foo> p1(new Foo(3, 4));
  shared_ptr<Foo> p2, p3;
  p3 = p2 = p1;
  cout << p1->prod() << std::endl;
  cout << p2->prod() << std::endl;
  cout << "contador de referencias: " << p1.use_count() << endl;

  thread t1(foo, p1), t2(foo, p1), t3(foo, p1);
  t1.join();
  t2.join();
  t3.join();
}