#include <iostream>

template <class T>
class Pilha {
private:
    T* m_elementos;     
    int m_tamanho;      
    int m_capacidade;   
public:
    Pilha(int n_capacidade):
        m_tamanho(0), m_capacidade(n_capacidade)
    {
        m_elementos = new T[n_capacidade];
    }
    
    ~Pilha() {
        delete[] m_elementos;
    }

    bool empty() {
        return m_tamanho == 0;
    }
    
    bool full() {
        return m_tamanho == m_capacidade;
    }

    int push (T novo) {
        if (full())
            return 0;
        m_elementos[m_tamanho] = novo;
        m_tamanho++;
        return 1;
    }

    int pop() {
        if (empty())
            return 0;
        m_tamanho--;
        return 1;
    }

    T& top() {    
        if (empty()) {
            std::cerr << "Acesso invalido ao topo!" << std::endl;
            exit(EXIT_FAILURE);
        }
        return m_elementos[m_tamanho-1];
    }

    int size() {
        return m_tamanho;
    }
};

int main(){
    Pilha<int> pilha(10);
    std::cout << "Tamanho: " << pilha.size() << std::endl;
    pilha.push(10);
    pilha.push(15);
    pilha.push(20);
    std::cout << pilha.top() << std::endl;
    pilha.pop();
    std::cout << "Tamanho: " << pilha.size() << std::endl;
    std::cout << pilha.top() << std::endl;
    pilha.pop();
    std::cout << pilha.top() << std::endl;
    pilha.pop();
    Pilha<std::string> pilha4(10);
    pilha4.push("Ana");
    pilha4.push("Maria");
    pilha4.push("Joao");
    std::cout << pilha4.top() << std::endl;
    pilha4.pop();
    std::cout << pilha4.top() << std::endl;
    pilha4.pop();
    std::cout << pilha4.top() << std::endl;
    pilha4.pop();


    return 0;
}
