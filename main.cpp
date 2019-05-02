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
    int vagasCurso, idCurso;

    //Captura da quantidade de cursos e de alunos
    cin >> qtdCursos;
    cin >> qtdAlunos;
    cout <<"Quantidade de Cursos: "<< qtdCursos <<endl; 
    cout <<"Quantidade de Alunos: "<< qtdAlunos <<endl;

    // Vetor de Struct de Cursos
    Curso *cursos = new Curso[qtdCursos];
        
    // Ler os cursos
    for(int i = 0; i < qtdCursos; i++){
        // Entrada de Informacoes
        cin.ignore();
        getline(cin,nomeCurso);
        cin >> vagasCurso;
        // Passando informacoes pro vetor
        cursos[i].id = i;
        cursos[i].nome = nomeCurso;
        cursos[i].vagas = vagasCurso;
    }

    // Ler os alunos
    for(int i = 0; i < qtdAlunos; i++){

    }

    return 0;
}