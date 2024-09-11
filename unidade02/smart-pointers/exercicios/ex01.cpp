#include <iostream>
#include <memory>

using namespace std;

class Resource{
public:
    Resource() {cout << "Resource criado!" << endl;}
    ~Resource() {cout << "Resource destruído!" << endl;}
};

unique_ptr<Resource> createResource() {
    return unique_ptr<Resource>(new Resource());
}

int main(){
    unique_ptr<Resource> p1 = createResource();
    cout << "addr p1 = " << p1.get() << endl;
    cout << endl;
    cout << "p1 movido para p2!" << endl;
    cout << endl;
    unique_ptr<Resource> p2 = move(p1);
    cout << "addr p2 = " << p2.get() << endl;
    cout << "addr p1 = " << p1.get() << endl;

    return 0;
}