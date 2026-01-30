#include "Lista/Lista.h"
#include <stdio.h>

int main () {
  lista l;
  iniciarLista(&l);
  inserirInicio (&l, 10);
  inserirInicio (&l, 20);
  inserirInicio (&l, 30);

  imprimirLista(&l)

  return 0;
}
