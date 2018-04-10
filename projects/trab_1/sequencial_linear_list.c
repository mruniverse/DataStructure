#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "sequencial_linear_list.h"

void inicialize_list(List *l){
  l->n = 0;
}

int size(List *l){
  return l->n;
}

void print_list(List *l){
  for(int i=0; i < l->n; i++){
    printf("Name:%s | ", l->D[i].name);
    printf("Phone:%s | ", l->D[i].phone);
    printf("Address:%s\n", l->D[i].address);
  }
}

int insert_new_data(List *l, Data d){
  if(l->n == 50){
    return -1;
  }

  l->D[l->n] = d;
  l->n = l->n+1;
}


int sequencial_search(List *l, char* c){
    int i = 0;

    while(i < l->n){
        if(strcmp(c, l->D[i].name) == 0 || strcmp(c, l->D[i].phone) == 0 || strcmp(c, l->D[i].address) == 0){
            printf("Name:%s | ", l->D[i].name);
            printf("Phone:%s | ", l->D[i].phone);
            printf("Address:%s\n", l->D[i].address);

            return i;
        }
        else i++;
    }
    return -1;
}

_Bool delete_element(List *l, char* c){
    int pos, j;
    pos = sequencial_search(l, c);

    if(pos == -1) return false;

    for(j = pos; j < l->n-1; j++){
        l->D[j] = l->D[j+1];
    }

     l->n--;
     return true;
}

void order_names(List* l){
    Data aux;
    for (int k = 0; k < l->n-1; k++){
        if(strncmp(l->D[k].name, l->D[k+1].name, 2) > 0){
            // printf("%s\n", l->D[k+1].name);
            aux = l->D[k];
            l->D[k] = l->D[k+1];
            l->D[k+1] = aux;
        }
    }
}

void reset(List* l){
    l->n = 0;
}
