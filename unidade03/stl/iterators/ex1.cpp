#include <iostream>
#include <list>

int main(){
    std::list<int> l;

    l.push_back(7);
    l.push_back(2);
    l.push_back(5);
    l.push_back(9);
    l.push_back(14);

    std::list<int>::iterator itr = l.begin();
    while(itr != l.end()){
        std::cout << 2 * *itr << " ";
        itr++;
    }
    std::cout << std::endl;

    return 0;
}