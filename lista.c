#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

// cria lista
lista *cria_lista(){
    lista *l = (lista *) malloc(sizeof(lista));

    l->inicio = NULL;
    l->fim = NULL;
    l->quant_itens = 0;

    return l;
}

// insere item no fim da  lista
void insere_item(lista *l, int id, int pos){
    // cria item
    item *i = (item *) malloc(sizeof(item));
    i->id = id;
    i->pos = pos;
    i->next = NULL;

    // se a lista estiver vazia
    if(l->quant_itens == 0){
        i->prev = NULL;
        l->inicio = i;
    } else{ // se não, insere no fim da lista
        item *aux = l->fim;
        i->prev = aux;
        aux->next = i;
    }
    l->fim = i;
    l->quant_itens++;
}

// remove o primeiro elemento da lista
void remove_item(lista *l){
    item *primeiro = l->inicio;

    if(l->quant_itens == 1){
        l->inicio = NULL;
        l->fim = NULL;
        l->quant_itens = 0;
        free(primeiro);
        //free(l);
    } else{
        item *primeiro = l->inicio;
        item *segundo = primeiro->next;
        segundo->prev = NULL;
        free(primeiro);
        l->inicio = segundo;

        l->quant_itens--;
    }
}

void apaga_lista(lista *l){
    item *aux = l->inicio;
    item *toFree;
    while(aux != NULL){
        toFree = aux;
        aux = toFree->next;
        free(toFree);
    }
    free(l);
}

/*
 * FUNÇÕES AUXILIARES
 */
int lista_vazia(lista *l){
    if(l->quant_itens == 0){
        return 1;
    } else{
        return 0;
    }
}

/*
 * FUNCOES AUXILIARES PRA VERIFICAR O ANDAMENTO DO PROGRAMA
 */

void imprime_lista(lista *l){
    if(l->quant_itens == 0){
        printf("lista vazia\n");
    }
    else{
        item *aux = l->inicio;
        while(aux != NULL){
            printf("id: %i ", aux->id);
            aux = aux->next;
        }
        printf("\n");
    }
}