#include "pilha.h"


/**************************************
* DADOS
**************************************/

typedef struct {
	Pilha* p1; //Usada para insercao/escrita
	Pilha* p2; //Usada para remocao/leitura
	int qtdeElementos;
}Fila;

/**************************************
* PROTÓTIPOS
**************************************/
Fila* fila_criar();
void fila_destruir(Fila* f);
Boolean fila_inserir(Fila* f, TipoElemento elemento);
Boolean fila_remover(Fila* f, TipoElemento* saida); // estratégia do scanf
Boolean fila_primeiro(Fila* f, TipoElemento* saida); // estratégia do scanf
Boolean fila_vazia(Fila* f);


/**************************************
* EXERCICIO 02
**************************************/

Fila* fila_criar(){
	Fila* fila = (Fila*) malloc(sizeof(Fila));
	fila->p1 = pilha_criar();
	fila->p2 = pilha_criar();
	fila->qtdeElementos = 0;

	return fila;
}

void fila_destruir(Fila* f){
	pilha_destruir(f->p1);
	pilha_destruir(f->p2);
	free(f);
}

Boolean fila_inserir(Fila* f, TipoElemento elemento){
	if(!f) return false;

	TipoElemento saida;

	if(pilha_vazia(f->p1)){
		while (!pilha_vazia(f->p2)) {
			pilha_desempilhar(f->p2, &saida);
			pilha_empilhar(f->p1, saida);
		}
	}
	f->qtdeElementos++;
	return pilha_empilhar(f->p1, elemento);
}

Boolean fila_remover(Fila* f, TipoElemento* saida){ // estratégia do scanf
	if(!f) return false;

	TipoElemento aux;

	if(pilha_vazia(f->p2)){
		while (!pilha_vazia(f->p1)) {
			pilha_desempilhar(f->p1, &aux);
			pilha_empilhar(f->p2, aux);
		}
	}
	f->qtdeElementos--;
	return pilha_desempilhar(f->p2, saida);
}

Boolean fila_primeiro(Fila* f, TipoElemento* saida){// estratégia do scanf
	if(!f) return false;

	TipoElemento aux;

	if(pilha_vazia(f->p2)){
		while (!pilha_vazia(f->p1)) {
			pilha_desempilhar(f->p1, &aux);
			pilha_empilhar(f->p2, aux);
		}
	}

	return pilha_topo(f->p2, saida);
}

Boolean fila_vazia(Fila* f){
	if(!f) return false;

	return (f->qtdeElementos = 0 ? true : false);
}
