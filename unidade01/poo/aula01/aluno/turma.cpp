#include "turma.h"

std::string Turma::getCodigo() {
    return codigo;
}

void Turma::setCodigo(std::string codigo) {
    codigo = codigo;
}

std::string Turma::getNome() {
    return nome;
}

void Turma::setNome(std::string nome) {
    nome = nome;
}

void Turma::addAluno(Aluno a){
    alunos.push_back(a);
}

void Turma::removeAluno(std::string matricula){
    bool removido = false;

    for(int i = 0; i < qtdAlunos; i++){
        if(removido)
            alunos[i-1] = alunos[i];

        if(alunos[i].getMatricula() == matricula){
            removido = true;
            qtdAlunos--;
        }
    }
}

void Turma::printTurma(){
    std::cout << "Componente: " << nome << " Turma: " << codigo << std::endl;
	std::cout << "Total de Alunos: " << qtdAlunos << std::endl;

    for (int i = 0; i < qtdAlunos; i++) {
        std::cout << alunos[i].getMatricula() << " " << alunos[i].getNome() << std::endl;
    }

    std::cout << std::endl << std::endl;
}