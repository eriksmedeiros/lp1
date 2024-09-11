#include <iostream>
#include <stack>

int main(){
    std::stack<int> pilha;

    pilha.push(4);
    pilha.push(8);
    pilha.push(7);

    while(!pilha.empty()){
        std::cout << "Removendo: " << pilha.top() << std::endl;
        pilha.pop();
    }

    return 0;
}