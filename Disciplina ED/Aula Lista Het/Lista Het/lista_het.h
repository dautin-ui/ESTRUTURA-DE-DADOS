#ifndef LISTA_HET
#define LISTA_HET

// tipos das figuras
#define RET 0
#define TRI 1
#define CIR 2

// nó da lista heterogênea
typedef struct listaHet {
    int tipo;
    void* info;
    struct listaHet* prox;
} ListaHet;

// structs das figuras
typedef struct {
    float b;
    float h;
} Retangulo;

typedef struct {
    float b;
    float h;
} Triangulo;

typedef struct {
    float r;
} Circulo;

// funções
ListaHet* lista_insere_ret(ListaHet* l, float b, float h);
ListaHet* lista_insere_tri(ListaHet* l, float b, float h);
ListaHet* lista_insere_cir(ListaHet* l, float r);

float max_area(ListaHet* l);

#endif
