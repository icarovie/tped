#ifndef CURSO_H
#define CURSO_H

#include <string>
#include "aluno.hpp"

using namespace std;

using namespace std;

typedef struct{
    int id;
    string nome;
    int vagas;

    Lista *classificados;
    Lista *espera;
}Curso;


#endif