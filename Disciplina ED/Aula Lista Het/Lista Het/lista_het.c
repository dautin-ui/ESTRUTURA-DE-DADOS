#include <stdio.h>
#include <stdlib.h>
#include "lista_het.h"

#define PI 3.14159

// funções auxiliares de área
float ret_area(Retangulo* r) {
    return r->b * r->h;
}

float tri_area(Triangulo* t) {
    return (t->b * t->h) / 2;
}

float cir_area(Circulo* c) {
    return PI * c->r * c->r;
}

// calcula área de um nó 
float area(ListaHet* p) {
    float a = 0.0;

    switch (p->tipo) {
        case RET:
            a = ret_area((Retangulo*) p->info);
            break;

        case TRI:
            a = tri_area((Triangulo*) p->info);
            break;

        case CIR:
            a = cir_area((Circulo*) p->info);
            break;
    }
    return a;
}

// maior área da lista
float max_area(ListaHet* l) {
    float amax = 0.0;
    ListaHet* p;

    for (p = l; p != NULL; p = p->prox) {
        float a = area(p);
        if (a > amax)
            amax = a;
    }
    return amax;
}

//functions
ListaHet* lista_insere_ret(ListaHet* l, float b, float h) {
    Retangulo* r = malloc(sizeof(Retangulo));
    r->b = b;
    r->h = h;

    ListaHet* novo = malloc(sizeof(ListaHet));
    novo->tipo = RET;
    novo->info = r;
    novo->prox = l;

    return novo;
}

ListaHet* lista_insere_tri(ListaHet* l, float b, float h) {
    Triangulo* t = malloc(sizeof(Triangulo));
    t->b = b;
    t->h = h;

    ListaHet* novo = malloc(sizeof(ListaHet));
    novo->tipo = TRI;
    novo->info = t;
    novo->prox = l;

    return novo;
}

ListaHet* lista_insere_cir(ListaHet* l, float r) {
    Circulo* c = malloc(sizeof(Circulo));
    c->r = r;

    ListaHet* novo = malloc(sizeof(ListaHet));
    novo->tipo = CIR;
    novo->info = c;
    novo->prox = l;

    return novo;
}
