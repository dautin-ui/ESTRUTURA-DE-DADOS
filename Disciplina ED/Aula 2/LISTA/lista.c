#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void iniciarLista(lista *l){
  l->inicio = NULL;
}

int listaVazia (lista *l){
  return l->inicio==NULL;
}

void inserirInicio (lista *l, int valor){
no *novo = (no *) malloc(sizeof(no));

  if(novo==null)
  {
    printf("erro na alocacao");
    return;
  }

  novo->valor = valor;
  novo->prox = l->inicio;
  l->inicio = novo;
}

void imprimeLista (lista *l){
  no *aux = l->inicio;
  while (aux != NULL){
    printf("%d -> ", aux->valor);
    aux = aux->prox
  }
  printf("NULL");
}
