#include <iostream>
#include <set>

int main(){
    std::set<int> s1;

    s1.insert(7);
    s1.insert(10);
    s1.insert(19);
    s1.insert(3);
    s1.insert(26);

    for(auto i = --s1.end(); i != --s1.begin(); i--){
        std::cout << *i << std::endl;
    }
    
    return 0;
}