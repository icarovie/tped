#include "curso.hpp"

/*Curso *criarCurso(int id, string nome, int vagas){
    Curso *c = (Curso*)(malloc(sizeof(Curso)));
    c->id = id;
    c->nome = nome;
    c->vagas = vagas;
    c->numeroDeAlocados = 0;

    return c;
}*/

void alocarAlunos(Aluno **v, int qtdAlunos,Curso *cursos,int qtdCursos){
    for(int i = 0; i < qtdAlunos ; i++){
        // Se o numero de alocados for menor que o numero de vagas
        if(cursos[v[i]->opcao1].numeroDeAlocados < cursos[v[i]->opcao1].vagas){
            insereLista( v[i], cursos[v[i]->opcao1].classificados); // Insiro o aluno na lista de classificados do curso 1
            v[i]->alocado = true; // Afirmo que ele foi alocado em um determinado curso
            cursos[v[i]->opcao1].numeroDeAlocados++; // Dou update no numero de alocados
        } else{
            insereLista( v[i], cursos[v[i]->opcao1].espera); // Como nao tem vaga na opcao 1 coloco ele na lista de espera
            if(v[i]->alocado == false && cursos[v[i]->opcao2].numeroDeAlocados < cursos[v[i]->opcao2].vagas){ // confiro se ele realmente nao esta alocado
                insereLista( v[i], cursos[v[i]->opcao2].classificados); // adiciono ele na lista de classificados do curso 2
                v[i]->alocado =true;
                cursos[v[i]->opcao2].numeroDeAlocados++;            
            } else{
                insereLista( v[i], cursos[v[i]->opcao2].espera);
            }
        }
    }
}