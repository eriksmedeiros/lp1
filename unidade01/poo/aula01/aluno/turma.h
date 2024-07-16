#ifndef TURMA_H
#define TURMA_H

#include "aluno.h"
#include <vector>

class Turma{
private:
    std::string codigo;
    std::string nome;

    std::vector<Aluno> alunos;
    int qtdAlunos = alunos.size();

public:
    void setCodigo(std::string newCodigo);
    std::string getCodigo();

    void setNome(std::string newNome);
    std::string getNome();

    void addAluno(Aluno a);
    void removeAluno(std::string matricula);
    void printTurma();
};
#endif