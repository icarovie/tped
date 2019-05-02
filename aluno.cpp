#include "aluno.hpp"

Lista *criarLista(){
    Lista *l = (Lista*)(malloc(sizeof(Lista)));
    l->inicio = NULL;
    l->fim = NULL;
    return l;
}

Aluno *criarAluno(int id, string nome, double nota, int opcao1, int opcao2){
    Aluno *a = (Aluno*)(malloc(sizeof(Aluno)));
    a->id = id;
    a->nome = nome;
    a->nota = nota;
    a->opcao1 = opcao1;
    a->opcao2 = opcao2;
    a->alocado = false;
    a->anterior = NULL;
    a->proximo = NULL;
}

void insereLista(Aluno *aluno, Lista *l){
    if(l->inicio == NULL){
        l->inicio = aluno;
        l->fim = aluno;
    } else{
        l->fim->proximo = aluno;
        aluno->anterior = l->fim;
    }
}

void imprimeLista(Lista *l){
    if(l->inicio == NULL){
        cout << "Lista Vazia" << endl;
    } else{
        // enquanto a o item não não for null vai imprimindo
    }
}