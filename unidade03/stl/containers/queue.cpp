#include <iostream>
#include <queue>

int main(){
    std::queue<const char*> fila;
    
    fila.push("estudar");
    fila.push("comer");
    fila.push("trabalhar");
    fila.push("exercitar");
    fila.push("dormir");

    while(!fila.empty()){
        std::cout << "Removendo: " << fila.front() << std::endl;
        fila.pop();
    }
}