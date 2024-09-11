#include <iostream>
#include <map>

int main(){
    std::map<const char*, int> mp;

    mp["Erik"] = 8;
    mp["Lucas"] = 7;
    mp["Daniel"] = 6;

    auto i = mp.begin();

    while (i != mp.end()){
        std::cout << i->first << " ";
        std::cout << i->second << std::endl;
        i++;
    }

    return 0;
}