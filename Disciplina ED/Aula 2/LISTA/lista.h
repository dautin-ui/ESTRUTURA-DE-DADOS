#ifndef lista_H                                                                             
 #define lista_H                                           
#include <stdio.h>
#include <stdlib.h>   
typedef struct no {
int valor; 
struct no *prox;
}no;

typedef struct {
no *inicio;
}lista;

//functions signatures 
void iniciarLista(lista *l);
int listaVazia (lista *l);
void inserirInicio (lista *l, int valor);
void imprimeLista (lista *l);

#endif
