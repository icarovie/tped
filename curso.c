#include "curso.h"

Curso *criarCurso(int id, string nome, int vagas){
    Curso *c = (Curso*)(malloc(sizeof(Curso)));
    c->id = id;
    c->nome = nome;
    c->vagas = vagas;
}