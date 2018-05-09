#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){
    List l;

    start_list(&l);
    creat_new_node(&l, 1);
    creat_new_node(&l, 2);
    creat_new_node(&l, 3);
    print(&l);
}
