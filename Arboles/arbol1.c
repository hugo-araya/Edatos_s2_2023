#include <stdio.h>
#include "arbol1.h"

int main(){
    ARBOL *raiz;
    crearArbol(&raiz);
    arbolito(&raiz);
    printf("\nPreorden ");
    preorden(raiz);
    printf("\nInorden ");
    inorden(raiz);
    printf("\nPostorden ");
    postorden(raiz);
    printf("\n\n<< Finalizado >>\n\n");
    return 0;
}
