#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v = {3, 14, 8, 6, 12};

    auto i = find(v.begin(), v.end(), 5);

    if(i != v.end())
        cout << "Elemento encontrado na posição: " << i - v.begin() + 1 << endl;
    else    
        cout << "Elemento não encontrado" << endl;    

    return 0;
}