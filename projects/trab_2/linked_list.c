#include "linked_list.h"

//Definindo o inicio da lista como NULL //Inicializar lista
void start_list(List* l){
    l->head = NULL;
}
//=============================================================================

Node* get_node_by_code(List* l, int code){
    Node* n = NULL;
    Node* actual = l->head;

    while(actual != NULL && actual->d->codigo != code){
        n = actual;
        actual = actual->next;
    }
    if(actual != NULL && actual->d->codigo == code){
        return actual;
    }

    return NULL;
}

//Criando e inserindo dados em um novo nó  //Inserir
Node* create_new_node(List *l, Data *d){
    Node *new_node;

    new_node = (Node*)malloc(sizeof(Node));
    new_node->d = d;
    new_node->next = l->head;
    l->head = new_node;
    l->n++;

    return new_node;
}
//=============================================================================
void print(List* l){
    Node* aux = l->head;
    puts("Whisky:");
    while(aux != NULL){
        printf("Nome|%s| País|%s| Preço|%.2f| Idade|%d| Código|%d| Quantidade|%d| \n", aux->d->nome, aux->d->pais, aux->d->preco_venda, aux->d->idade, aux->d->codigo, aux->d->qntd);
        aux = aux->next;
        puts("");
    }
}
//=============================================================================
int remove_by_code(List* l, int n) {
    Node* aux = NULL;
    Node* current = l->head;

    if(n == 0) {
        l->head = NULL;

        return 0;
    }

    while(current->next->d->codigo != n) {
        if (current->next == NULL) {
            return -1;
        }
        current = current->next;
    }

    aux = current->next;
    current->next = aux->next;
    free(aux);

    return 0;

}
//=============================================================================
void order_by_age(List* l){
    Data* aux = NULL;
    Node* current = l->head;

    while(current->next != NULL){
        if(current->d->idade > current->next->d->idade){
            aux = current->d;
            current->d = current->next->d;
            current->next->d = aux;
            order_by_age(l); //Aqui é feita uma recursão para garantir
                             //que todos os itens serão corretamente ordenados
        }
        current = current->next;
    }
    current = NULL;
    aux = NULL;
}
//=============================================================================

//=============================================================================
void order_by_quantity(List* l){
    Data* aux = NULL;
    Node* current = l->head;

    while(current->next != NULL){
        if(current->d->qntd > current->next->d->qntd){
            aux = current->d;
            current->d = current->next->d;
            current->next->d = aux;
            ("teste");
            order_by_quantity(l); //Aqui é feita uma recursão para garantir
                                  //que todos os itens serão corretamente ordenados
        }
        current = current->next;
    }
    current = NULL;
    aux = NULL;
}
//=============================================================================

//=============================================================================
void order_by_country(List* l){
    Data* aux = NULL;
    Node* current = l->head;

    while(current->next != NULL){
        if(strcmp(current->d->pais, current->next->d->pais) > 0){
            aux = current->d;
            current->d = current->next->d;
            current->next->d = aux;
            order_by_country(l); //Aqui é feita uma recursão para garantir
                                 //que todos os itens serão corretamente ordenados
        }
        current = current->next;
    }
    current = NULL;
    aux = NULL;
}
//=============================================================================
