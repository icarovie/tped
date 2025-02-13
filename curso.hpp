#ifndef CURSO_H
#define CURSO_H

#include <string>
#include "aluno.hpp"

using namespace std;

typedef struct{
    int id;
    string nome;
    int vagas;
    int numeroDeAlocados;

    Lista *classificados = NULL;
    Lista *espera = NULL;
}Curso;

void alocarAlunos(Aluno **v, int qtdAlunos,Curso *cursos,int qtdCursos);


#endif