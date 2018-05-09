#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Data{
    char nome[50];
    char pais[50];
    double preco_venda;
    int idade;
    int codigo;
    int qntd;
}Data;

typedef struct Node{
    Data* d;
    struct Node* next;
}Node;

typedef struct List{
    int n;
    Node* head;
}List;

void start_list(List* l);
Node* get_node_by_code(List* l, int code);
Node* create_new_node(List* l, Data *d);
void print(List* l);
int remove_by_code(List* l, int n);
void order_by_age(List* l);
void order_by_quantity(List* l);
void order_by_country(List* l);
