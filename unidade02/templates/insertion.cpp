#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void printArray(T & a) {
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

template <typename T>
void insertionSort(T & v){
    for(int i = 1; i < v.size(); i++){
        int j = i;

        while(j > 0 && v[j] < v [j - 1])
        {
            auto aux = v[j];
            v[j] = v[j-1];
            v[j-1] = aux;
            j--;
        }

        printArray(v);
    }
}

int main(){

    vector<int> intVec = {34, 7, 23, 32, 5, 62};
    cout << "Vetor de inteiros antes da ordenação: ";
    printArray(intVec);
    insertionSort(intVec);
    cout << "Vetor de inteiros após a ordenação: ";
    printArray(intVec);

    vector<float> floatVec = {3.4, 7.1, 2.3, 3.2, 5.5, 6.2};
    cout << "\nVetor de floats antes da ordenação: ";
    printArray(floatVec);
    insertionSort(floatVec);
    cout << "Vetor de floats após a ordenação: ";
    printArray(floatVec);

    vector<char> charVec = {'z', 'a', 'g', 'b', 'f', 'd'};
    cout << "\nVetor de chars antes da ordenação: ";
    printArray(charVec);
    insertionSort(charVec);
    cout << "Vetor de chars após a ordenação: ";
    printArray(charVec);

    return 0;
}
