#include <stdio.h>
#include "listahet.h"

int main() {
    ListaHet* l = NULL;

    // insere algumas figuras
    l = lista_insere_ret(l, 10.0, 5.0);   // área = 50
    l = lista_insere_tri(l, 6.0, 4.0);    // área = 12
    l = lista_insere_cir(l, 3.0);         // área ≈ 28.27
    l = lista_insere_ret(l, 8.0, 7.0);    // área = 56

    // calcula e mostra a maior área
    printf("Maior area da lista: %.2f\n", max_area(l));


    return 0;
}
