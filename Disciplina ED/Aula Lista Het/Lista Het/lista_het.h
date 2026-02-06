#ifndef LISTA_HET
#define LISTA_HET

//define os tipos das figuras
#define RET 0
#define TRI 1
#define CIR 2


//nó da lista heterogênea
struct listaHet {
    int tipo;
    void* info;
    struct listaHet* prox;
}ListaHet;

//struct das figuras 
typedef struct {
    float b;
    float h;
}retangulo;

typedef struct {
    float b;
    float h;
}triangulo;

typedef struct {
    float r;
}circulo;

//functions signatures
listaHet* cria_ret (float b, float h);
listaHet* cria_tri (float b, float h);
listaHet* cria_cir (float r);
float calculaArea (listaHet* p);

#endif
