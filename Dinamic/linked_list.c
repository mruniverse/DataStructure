#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

//Definindo o inicio da lista como NULL
void start_list(List* l){
    l->beg = NULL;
}
//=====================================

Node* get_last_ordered_node(List* l, int data){
    Node* n = NULL;
    Node* actual = l->beg;

    while(actual != NULL && actual->d < data){
        n = actual;
        actual = actual->next;
    }
    if(actual != NULL && actual->d == data){
        return actual;
    }

    return NULL;
}

//Criando e inserindo dados em um novo nó
Node* creat_new_node(List* l, int data){
    Node* ant, new_node;


    new_node = get_last_ordered_node(&l, data);
    if(aux != NULL){
        return -1;
    }
    new_node = (Node*)malloc(sizeof(Node));
    new_node->d = data;
    if(ant == NULL){
        new_node->next = l->beg;
        l->beg = new_node;
    }
    else{
        new_node->next = ant->next;
        ant->next = new_node;
    }

    return 0;
}
//========================================

void print(List* l){
    Node* end = l->beg;
    printf("Lista: ");
    while(end != NULL){
        printf("%d | ", end->d);
        end = end->next;
    }
}
