//Trabalho: Trab_1-Implementação lista sequencial estática (LISTA TELEFÔNICA)
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "sequencial_linear_list.h"

int main(){
  List l;
  Data r;
  int n = 0;
  char nome[50];
  char phone[12];
  char address[50];

  inicialize_list(&l);

  strcpy(nome, "Rogerio");
  strcpy(phone, "5798-6547");
  strcpy(address, "vishnossa");
  r.name = nome;
  r.phone = phone;
  r.address = address;
  insert_new_data(&l, r);

  strcpy(nome, "Ademilson");
  strcpy(phone, "5798-6547");
  strcpy(address, "rua");
  r.name = nome;
  r.phone = phone;
  r.address = address;
  insert_new_data(&l, r);

  strcpy(nome, "Fabio");
  strcpy(phone, "5798-6547");
  strcpy(address, "Avenida");
  r.name = nome;
  r.phone = phone;
  r.address = address;
  insert_new_data(&l, r);

  strcpy(nome, "Lorenço");
  strcpy(phone, "0192-6547");
  strcpy(address, "Estrada");
  r.name = nome;
  r.phone = phone;
  r.address = address;
  insert_new_data(&l, r);

  //
  // r.name = "Silvia";
  // r.phone = "9875-6449";
  // r.address = "sads nodasdssa";
  // insert_new_data(&l, r);
  //
  // r.name = "Zubumafu";
  // r.phone = "9875-6449";
  // r.address = "sads nodasdssa";
  // insert_new_data(&l, r);
  //
  // r.name = "Aastolfo";
  // r.phone = "9875-6449";
  // r.address = "sads nodasdssa";
  // insert_new_data(&l, r);

  // print_list(&l);
  // sequencial_search(&l, "lalaland");
  // delete_element(&l, "lalaland");
  // delete_element(&l, "Ademilson");
  puts("Not Ordered:");
  print_list(&l);
  order_names(&l);
  puts("\nOrdered:");
  print_list(&l);


  return 0;
}
