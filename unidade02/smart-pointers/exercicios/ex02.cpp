#include <iostream>
#include <memory>

using namespace std;

class SharedResource{
public:
     SharedResource() {cout << "Resource criado!" << endl;}
    ~SharedResource() {cout << "Resource destruído!" << endl;}
};

int main(){
    shared_ptr<SharedResource> p1(new SharedResource());
    cout << "Count: " << p1.use_count() << endl;

    {
        shared_ptr<SharedResource> p2 = p1;
        cout << "Count: " << p1.use_count() << std::endl;
    }

    cout << "Count: " << p1.use_count() << endl;
    return 0;
}