#include <iostream>
#include <string.h>

using namespace std;

class Pessoa{
protected:
    string name;
    string telefone;
    string cpf;
public:
    Pessoa(string _name, string _telefone, string _cpf) : name(_name), telefone(_telefone), cpf(_cpf) {};
    void exibir(){
        cout << name << " - " << telefone << " - CPF: " << cpf << endl;
    }
};

class Aluno : public Pessoa{
private:
    float cra;
    int semestre;
public: 
    Aluno(string _name, string _telefone, string _cpf, float _cra, int _sem) : Pessoa(_name, _telefone, _cpf), 
    cra(_cra), semestre(_sem) {};

    void exibir() {
        cout << name << " - " << telefone << " - CPF: " << cpf << "\nCRA: " << cra << " - Semestre: " << semestre << endl;
    }
};

class Professor : public Pessoa{
private:
    int qtdDisciplinas;
    string departamento;
public:
    Professor(string _name, string _telefone, string _cpf, int _dis, string _dep) : Pessoa(_name, _telefone, _cpf), qtdDisciplinas(_dis), departamento(_dep) {};

    void exibir(){
        cout << name << " - " << telefone << " - CPF: " << cpf << "\nQtd: " << qtdDisciplinas << " - " << departamento << endl;
    }
};

int main(){

    string name;
    string telefone;
    string cpf;

    getline(cin, name);
    getline(cin, telefone);
    getline(cin, cpf);
    Pessoa pessoa(name, telefone, cpf);

    float cra;
    int sem;
    getline(cin, name);
    getline(cin, telefone);
    getline(cin, cpf);
    cin >> cra >> sem;
    cin.ignore();     
    Aluno aluno(name, telefone, cpf, cra, sem);

    int qtdDisc;
    string dep;
    getline(cin, name);
    getline(cin, telefone);
    getline(cin, cpf);
    cin >> qtdDisc;
    cin.ignore(); // Limpar o buffer de entrada
    getline(cin, dep);    
    Professor prof(name, telefone, cpf, qtdDisc, dep);

    pessoa.exibir();
    aluno.exibir();
    prof.exibir();
}