#include "aluno.hpp"

// Funções De Aluno da Main
void ordenarAlunos(Aluno **v,int qtd){
    Aluno *aux;

    for(int i=0; i<qtd; i++){
        for(int j = i+1; j < qtd; j++){
            if(v[i]->nota < v[j]->nota){
                aux = v[j];
                v[j]= v[i];
                v[i] = aux;  
            }
        }
    }
}

void printarAlunos(Aluno **v,int qtd){
    for(int i = 0;i < qtd ;i++){
        cout << v[i]->id<<" "<<v[i]->nome <<" "<< v[i]->nota<<endl;
    }
}



// ==========================================================
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

    return a;
}

void insereLista(Aluno *aluno, Lista *l){
    if(l->inicio == NULL){
        l->inicio = aluno;
        l->fim = aluno;
    } else{
        l->fim->proximo = aluno;
        aluno->anterior = l->fim;
        l->fim = aluno;
    }
}

void imprimeLista(Lista *l){
    if(l->inicio == NULL){
        cout << "Lista Vazia" << endl;
    } else{
        Aluno *aux = l->inicio;
        while(aux != NULL){
            cout << aux->nome << endl;
            aux = aux->proximo;
        }
    }
    cout << endl;
}