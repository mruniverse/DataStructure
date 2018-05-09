#include <stdio.h>
#include <stdlib.h>

typedef struct Data{
    char nome[50];
    char pais[50];
    double preco_venda;
    int idade;
    int codigo;
    int qntd;
}Data;

typedef struct Node{
    Data d;
    struct Node* next;
}Node;

typedef struct List{
    Node* beg;
}List;

void start_list(List* l);
void print(List* l);
Node* creat_new_node(List* l, Data d);
