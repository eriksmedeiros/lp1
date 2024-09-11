#include <iostream>
#include <list>

int main(){
    std::list<const char*> l;

    l.push_back("Pedro");
    l.push_back("Diego");
    l.push_back("Henrique");
    l.push_back("Lucas");
    l.push_back("Felipe");

    int i = 0;
    for(const auto& nome : l){
        std::cout << nome;
        i++;
        if (i != l.size())
            std::cout << ", ";
    }
    std::cout << std::endl;
}