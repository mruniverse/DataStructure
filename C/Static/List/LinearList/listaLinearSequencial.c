#include <stdlib.h>
#include <stdio.h>
#define MAX 50

typedef struct{
  int chave;
}Registro;

typedef struct{
  Registro A[MAX];
  int n;
}Lista;

void inicializaLista(Lista *l){
  l->n = 0;
}

int tamanho(Lista *l){
  return l->n;
}

void exibirLista(Lista *l){
  puts("Lista:");
  for(int i=0; i < l->n; i++){
    printf("%d | ", l->A[i].chave);
  }
  puts("\n");
}

int inserirElemLista(Lista *l, Registro reg){
  if(l->n == MAX){
    return -1;
  }
  l->A[l->n] = reg;
  l->n = l->n+1;

  return 0;
}

int main() {
  Lista l;
  Registro r;

  inicializaLista(&l);
  r.chave = 10;
  inserirElemLista(&l, r);
  r.chave = 23;
  inserirElemLista(&l, r);
  r.chave = 12;
  inserirElemLista(&l, r);
  exibirLista(&l);

  return 0;
}
