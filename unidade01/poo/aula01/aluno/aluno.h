#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>

class Aluno{

private:
    std::string nome;
    std::string matricula;

public:
    void setNome(std::string newNome);
    std::string getNome();

    void setMatricula(std::string newMatricula);
    std::string getMatricula();

    void printAluno();
};

#endif