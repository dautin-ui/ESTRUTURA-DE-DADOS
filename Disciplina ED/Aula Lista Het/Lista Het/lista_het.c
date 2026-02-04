#include <stdio.h>
#include <stdlib.h>
#include "lista_het.h"

#define RET 0
#define TRI 1
#define CIR 2

struct listaHet {
    int tipo;
    void* info;
    struct listaHet* prox;
};

struct retangulo {
    float b;
    float h;
};

struct triangulo {
    float b;
    float h;
};

struct circulo {
    float r;
};
