#include <stdlib.h>
#include <stdio.h>
#include "sequencial_linear_list.h"

int main(){
  List l;
  Data r;

  inicialize_list(&l);

  r.name = "Rogerio";
  r.phone = "5798-6547";
  r.address = "vishnossa";
  insert_new_data(&l, r);

  r.name = "Ademilson";
  r.phone = "3214-4654";
  r.address = "NOBODYCARES";
  insert_new_data(&l, r);

  r.name = "Fabio";
  r.phone = "5798-6547";
  r.address = "vish nossa";
  insert_new_data(&l, r);

  r.name = "Bruno";
  r.phone = "8723-6547";
  r.address = "minha vish";
  insert_new_data(&l, r);

  r.name = "Silvia";
  r.phone = "9875-6449";
  r.address = "sads nodasdssa";
  insert_new_data(&l, r);

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
