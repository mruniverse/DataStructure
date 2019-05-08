#include "linked_list.h"

int main(){
    List l;
    Data d1;
    Data d2;
    Data d3;

    d1 = (const Data){"Whisky do bom","Acre",32.12,12,21,100};
    d2 = (const Data){"Whisky do ruim","Brasil",140.2,21,41,20};
    d3 = (const Data){"A vai embora","Alemanha",12.90,31,20,150};

    start_list(&l);

    create_new_node(&l, &d1);
    create_new_node(&l, &d2);
    create_new_node(&l, &d3);

    // remove_by_code(&l, 41);

    // order_by_age(&l);
    order_by_country(&l);
    // order_by_quantity(&l);

    print(&l);

    return 0;
}
