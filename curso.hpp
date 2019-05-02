#ifndef CURSO_H
#define CURSO_H

#include <string>
#include "aluno.hpp"

using namespace std;

typedef struct{
    int id;
    string nome;
    int vagas;

    Lista *classificados = NULL;
    Lista *espera = NULL;
}Curso;


#endif