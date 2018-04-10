typedef struct{
  char* phone;
  char* name;
  char* address;
}Data;

typedef struct{
  Data D[50];
  int n;
}List;


void inicialize_list(List *l);
int size(List *l);
void print_list(List *l);
int insert_new_data(List *l, Data d);
int sequencial_search(List *l, char* c);
_Bool delete_element(List *l, char* c);
void reset(List* l);
void order_names(List* l);
