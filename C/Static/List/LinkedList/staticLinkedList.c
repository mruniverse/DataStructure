#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int data;
  int next;
}Node;

typedef struct{
  Node n[50];
  int head;   //The beginning of the list
  int av;     //Available
  int size;
}List;

int newList(List* l){
  int i = 0, size = 0;

  for(i; i < 50-1; i++){
    l->n[i].next = i+1;
    puts("test");
  }
  l->n[50-1].next = -1;

  while (i != -1) {
    size++;
    i = l->n[i].next;
    printf("%d", size);
  }

  return size;
}

int main(){
  List l;

  newList(&l);
  puts("test2");
}
