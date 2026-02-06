#ifndef LISTA_HET
#define LISTA_HET

//nó da lista het
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
