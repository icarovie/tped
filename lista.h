#ifndef LISTA_H
#define LISTA_H

typedef struct node{
    int id; // codigo identificador
    struct node *prev; 
    struct node *next;
} item; // item da lista

typedef struct{
    int quant_itens; // armazena a quantidade de itens
    item *inicio;
    item *fim;
} lista;

lista *cria_lista();  // O(1)
void insere_item(lista *l, int id, int pos); // insere item no fim da lista O(1)
void remove_item(lista *l); // remove o primeiro elemento da lista O(1)
void apaga_lista(lista *l); // O(m) ou O(n), dependendo se é a lista de alocações ou de preferências

/*
 * FUNÇÕES AUXILIARES
 */
int lista_vazia(lista *l); // O(1)

/*
 * FUNCOES AUXILIARES PRA VERIFICAR O ANDAMENTO DO PROGRAMA
 */
void imprime_lista(lista *l); // O(m) ou O(n), dependendo se é a lista de alocações ou de preferências

#endif