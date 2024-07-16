#include "aluno.h"

void Aluno::setNome(std::string newNome){
    nome = newNome;
}
std::string Aluno::getNome(){
    return nome;
}

void Aluno::setMatricula(std::string newMatricula){
    matricula = newMatricula;
}
    
std::string Aluno::getMatricula(){
    return matricula;
}

void Aluno::printAluno(){
    std::cout << "Nome: " << nome << "/ Matrícula: " << matricula << std::endl;
}