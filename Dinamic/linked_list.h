typedef struct Node{
    int d;
    struct Node* next;
}Node;

typedef struct List{
    Node* beg;
}List;

void start_list(List* l);
Node* creat_new_node(List* l, int data);
void print(List* l);
