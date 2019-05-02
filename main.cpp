// Inclusão de bibliotecas padrão
#include <iostream>
#include <string>
#include <fstream>

// Inclusão de .H
#include "aluno.hpp"
#include "curso.hpp"

using namespace std;

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

int main(){
    // Variáveis Estaticas
    int qtdCursos,qtdAlunos;
    string nomeCurso;
    int vagasCurso;
    string nomeAluno;
    double notaAluno;
    int opcao1,opcao2;

    //Captura da quantidade de cursos e de alunos
    cout << "Digite a quantidade de Cursos e de Alunos: ";
    cin >> qtdCursos;
    cin >> qtdAlunos;

    // Vetor de Struct de Cursos
    Curso cursos[qtdCursos];
    // Ponteiro de Vetor de Alunos
    Aluno *alunos[qtdAlunos];
    
    // Ler os cursos
    for(int i = 0; i < qtdCursos; i++){
        cout << "Digite o nome do Curso "<< i <<": ";
        // Entrada de Informacoes
        cin.ignore();
        getline(cin,nomeCurso);
        cout << " Digite as vagas de "<<nomeCurso <<": ";
        cin >> vagasCurso;
        // Passando informacoes pro vetor
        cursos[i].id = i;
        cursos[i].nome = nomeCurso;
        cursos[i].vagas = vagasCurso;

        cout << "ID "<< cursos[i].id << "--> "<<cursos[i].nome<<endl;
        cout << "N De Vagas: "<<cursos[i].vagas <<endl;
    }

    // Ler os alunos
    for(int i = 0; i < qtdAlunos; i++){
        // Entrada de Dados
        cin.ignore();
        cout << "Nome do Aluno: ";
        getline(cin,nomeAluno);
        cout << " Nota OP1 OP2: ";
        cin >> notaAluno >> opcao1 >> opcao2;
        alunos[i] = criarAluno(i,nomeAluno,notaAluno,opcao1,opcao2);
    }
    // Ordenar os alunos
    ordenarAlunos(alunos,qtdAlunos);
    cout << "-----------------" <<endl;

    // Printar Alunos
    printarAlunos(alunos,qtdAlunos);

    // Alocar nos Cursos

    return 0;
}