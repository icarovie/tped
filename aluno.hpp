#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <iostream>
#include <string>

using namespace std;

// Estrutura de Alunos
typedef struct node_t{
    int id;
    string nome;
    double nota;  
    int opcao1;
    int opcao2;
    bool alocado;

    // Nós para ordenar os alunos
    node_t *anterior;
    node_t *proximo;

} Aluno;

// Estrutura De Lista
typedef struct{
    Aluno *inicio;
    Aluno *fim;
} Lista;

// Função para criarr um aluno
Aluno *criarAluno(int id, string nome, double nota, int opcao1, int opcao2);
void ordenarAlunos(Aluno **v,int qtd);
void printarAlunos(Aluno **v,int qtd);

// Funções De Lista
Lista *criarLista();
void insereLista(Aluno *aluno, Lista *l);
void imprimeLista(Lista *l);

#endif