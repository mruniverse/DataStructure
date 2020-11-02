#include <stdio.h>
#include <string.h>
#include "pilha.h"
#include "../arquivosAuxiliares/tad_teste.c"

typedef enum{
    OK = 0, 
    ERRO1 = 1, //Falta um delimitador de abertura
    ERRO2 = 2, //Falta um delimitador de fechamento
    ERRO3 = 3, //Incompatibilidade de delimitadores
}Status;


/**************************************
* EXERCICIO 01
**************************************/
Status valida_expressao(char* exp){
 //IMPLEMENTAR   
    return ERRO1;
    return ERRO2;
    return ERRO3;
    return OK;
}




void testeExpressoesCorretas(){
    printf("\n------------------------------------------------\n");
    printf(">>> TESTE EXPRESSOES CORRETAS\n");
    printf("------------------------------------------------\n");
    char exp[100];

    strcpy(exp, "(1+2)");
    test(valida_expressao(exp) == OK, "Expressao Ok");
    strcpy(exp, "{ [( ) ] }");
    test(valida_expressao(exp) == OK, "Expressao Ok");
}

void testeErro1(){
    printf("\n--------------------------------------------------\n");
    printf(">>> TESTE ERRO1 Ausencia de delimitador de ABERTURA\n");
    printf("----------------------------------------------------\n");
    char exp[100];
    
    strcpy(exp, "())");
    test(valida_expressao(exp) == ERRO1, "Ausencia de (");
    strcpy(exp, "()]");
    test(valida_expressao(exp) == ERRO1, "Ausencia de [");
    strcpy(exp, "( ) ( ) () ( ) ( ) { ( ) } }");
    test(valida_expressao(exp) == ERRO1, "Ausencia de {");
}

void testeErro2(){
    printf("\n---------------------------------------------------\n");
    printf(">>> TESTE ERRO2 Ausencia de delimitador de FECHAMENTO\n");
    printf("-----------------------------------------------------\n");
    char exp[100];

    strcpy(exp, "(()");
    test(valida_expressao(exp) == ERRO2, "Ausencia de )");
    strcpy(exp, "[()");
    test(valida_expressao(exp) == ERRO2, "Ausencia de ]");
    strcpy(exp, "  {({[]()})");
    test(valida_expressao(exp) == ERRO2, "Ausencia de }");
}
void testeErro3(){
    printf("\n---------------------------------------------------\n");
    printf(">>> TESTE ERRO3 Incompatibilidade de delimitadores   \n");
    printf("-----------------------------------------------------\n");
    char exp[100];

    strcpy(exp, "(]");
    test(valida_expressao(exp) == ERRO3, "Incompatibilidade (]");
    strcpy(exp, "[{[()]}}");
    test(valida_expressao(exp) == ERRO3, "Incompatibilidade [}");
    strcpy(exp, "()[{}{]}");
    test(valida_expressao(exp) == ERRO3, "Incompatibilidade {]");
}



int main(){
    
    testeExpressoesCorretas();
    testeErro1();
    testeErro2();
    testeErro3();

    report();
    

}

