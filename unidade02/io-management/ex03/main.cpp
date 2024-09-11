#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Aluno 
{
    string name;
    double n1, n2, n3;

public:
    Aluno(string nome, double n1, double n2, double n3) : name(nome), n1(n1), n2(n2), n3(n3) {}

    string getName(){
        return name;
    }

    double calcularMedia() {
        return (n1 + n2 + n3) / 3.0;
    }

    static string status(double media) {
        if (media >= 7.0)
            return "Aprovado";
        return "Reprovado";
    }
};

int main()
{
    ifstream fin("input.txt");
    ofstream fout("data/data.txt");

    if(!fin) 
    {
        cerr << "Ops! arquivo não pode ser aberto.\n";
        return 1;
    }

    string linha;

    while(getline(fin, linha))
    {
        stringstream ss(linha);    
        string name;
        string nota;
        string n1;
        string n2;
        string n3;

        getline(ss, name, ';');
        getline(ss, n1, ';');
        getline(ss, n2, ';');
        getline(ss, n3, ';');

        Aluno alunoAtual(name, stod(n1), stod(n2), stod(n3));
        double media = alunoAtual.calcularMedia();

        std::cout << std::setprecision(1) << std::fixed;
        cout << alunoAtual.getName() << " " << media << " " << Aluno::status(media) << endl;

        std::cout << std::setprecision(1) << std::fixed;
        fout << alunoAtual.getName() << " " << media << " " << Aluno::status(media) << endl;
    }
    
    fin.close();
    return 0;
}