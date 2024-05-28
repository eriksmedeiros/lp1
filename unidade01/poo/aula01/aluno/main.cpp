#include "turma.h"

int main(){
    Aluno a;
    a.setNome("João");
    a.setMatricula("11111");

    Aluno b;
    b.setNome("Maria");
    b.setMatricula("22222");

    Aluno c;
    c.setNome("Carlos");
    c.setMatricula("33333");

    // a.printAluno();
    // b.printAluno();
    // c.printAluno();

    Turma lp1;
    lp1.setNome("Linguagem de Programação I");
    lp1.setCodigo("IMD0030");

    lp1.addAluno(a);
    lp1.addAluno(b);
    lp1.addAluno(c);

    lp1.printTurma();

    // lp1.removeAluno("22222");

    // lp1.printTurma();

    return 0;
}