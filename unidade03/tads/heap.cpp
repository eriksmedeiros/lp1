#include <iostream>

template <class T>
class Fila{
private:
    T* elementos;
    int first;
    int last;
    int size;
    int max;
public:
    Fila(int s_max) : size(0), max(s_max), first(0), last(0) 
    {
        elementos = new T[s_max];
    }

    ~Fila(){
        delete[] elementos;
    }

    bool empty(){
        return size == 0;
    }

    bool full(){
        return size == max;
    }

    void enqueue(T newT){
        if(full())
            return;
        elementos[last] = newT;
        last = (last + 1) % max;
        size++;
    }

    void dequeue(){
        if(empty()){
            return;
        }
        first = (first + 1) % max;
        size--;
    }

    T& front(){
        if (empty()){
            std::cerr << "Acesso inválido à frente da fila!" << std::endl;
            exit(EXIT_FAILURE);
        }
        return elementos[first];
    }
};

int main(){
    Fila<int> fila(5);  // Criar uma fila de inteiros com capacidade 5

    fila.enqueue(10);
    fila.enqueue(20);
    fila.enqueue(30);

    std::cout << "Elemento da frente: " << fila.front() << std::endl;
    fila.dequeue();
    std::cout << "Elemento da frente após dequeue: " << fila.front() << std::endl;

    fila.enqueue(40);
    fila.enqueue(50);
    fila.enqueue(60); // Enfileira até a capacidade máxima

    while (!fila.empty()) {
        std::cout << "Removendo: " << fila.front() << std::endl;
        fila.dequeue();
    }

    return 0;
}