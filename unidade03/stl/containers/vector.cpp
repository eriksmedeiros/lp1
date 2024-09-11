#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);

    for (int i = 0; i < v.size(); i++){
        std::cout << v[i];
        if (i != v.size() - 1)
            std::cout << ", ";
    }
    std::cout << std::endl;

    return 0;
}