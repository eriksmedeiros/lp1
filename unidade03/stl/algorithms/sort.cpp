#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v = {3, 14, 8, 6, 12};

    sort(v.begin(), v.end());

    cout << "Vetor ordenado: ";
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}