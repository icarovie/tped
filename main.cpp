// Inclusão de bibliotecas padrão
#include <iostream>
#include <string>
#include <fstream>

// Inclusão de .H
#include "aluno.hpp"
#include "curso.hpp"

using namespace std;

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
        cursos[i].numeroDeAlocados = 0;
        cursos[i].classificados = criarLista();
        cursos[i].espera = criarLista();

       /* cout << "ID "<< cursos[i].id << "--> "<<cursos[i].nome<<endl;
        cout << "N De Vagas: "<<cursos[i].vagas <<endl;*/
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
    /*
    alocarAlunos(alunos,qtdAlunos,cursos,qtdCursos);

    // Imprimir a lista
    cout << "********************************"<<endl;
    cout << "**** VESTIBULAR UFMHELL 2019 ****"<<endl;
    cout << "********************************"<<endl;
    for(int i = 0; i < qtdCursos; i++){
        cout <<"===  "<< cursos[i].nome << "  ==="<<endl;
        cout <<"          CLASSIFICADOS          "<<endl;
        imprimeLista(cursos[i].classificados);
        cout <<"          LISTA DE ESPERA        "<<endl;
        //imprimeLista(cursos[i].espera);
    }
    */

    return 0;
}