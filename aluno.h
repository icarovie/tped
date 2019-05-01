#ifndef ALUNO_H
#define ALUNO_H

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

// Funções De Lista
Lista *criarLista();
Aluno *criarAluno(int id, string nome, double nota, int opcao1, int opcao2);
void insereLista(Aluno *aluno, Lista *l);