#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    vector<int> v = {3, 14, 8, 6, 12};

    int sum = accumulate(v.begin(), v.end(), 0);

    cout << sum << endl;
    return 0;
}