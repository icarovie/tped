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
        //Se tiver vaga na primeira opcao eu aloco ele e mudo a flag pra alocado
        if(cursos[v[i]->opcao1].numeroDeAlocados < cursos[v[i]->opcao1].vagas){
            v[i]->alocado = true;
            insereLista( v[i], cursos[v[i]->opcao1].classificados);
            //Dou update no numero de alocados
            cursos[v[i]->opcao1].numeroDeAlocados++;
            cout << "alocados : "<<cursos[v[i]->opcao1].numeroDeAlocados <<endl;
        } else{
            // Coloco o aluno na lista de espera da opcao1
            insereLista( v[i], cursos[v[i]->opcao1].espera);
            if(v[i]->alocado == false){
                if(cursos[v[i]->opcao2].numeroDeAlocados < cursos[v[i]->opcao2].vagas){
                    v[i]->alocado =true;
                    insereLista( v[i], cursos[v[i]->opcao2].classificados);
                    // Dou update no numero de alocados
                    cursos[v[i]->opcao2].numeroDeAlocados++;            
                } else{
                    // Coloco o aluno na lista de espera da opcao2
                    insereLista( v[i], cursos[v[i]->opcao2].espera);
                }
            }
        }
    }
}