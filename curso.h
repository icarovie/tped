#ifndef CURSO_H
#define CURSO_H

typedef struct{
    int id;
    string nome;
    int vagas;

    Lista *classificados;
    Lista *espera;
}Curso;


