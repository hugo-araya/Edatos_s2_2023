#include <stdio.h>
#include "arbol.h"

int main(){
    ARBOL *raiz;
    int CONTADOR = 0;
    int CONTADORHOJAS = 0;
    int CONTADORINTERNOS = 0;
    crearArbol(&raiz);
    arbolito(&raiz);
    printf("\nPreorden ");
    preorden(raiz);
    printf("\nInorden ");
    inorden(raiz);
    printf("\nPostorden ");
    postorden(raiz);
    printf("\nAltura del arbol: ");
    printf("%d",altura(raiz));
    printf("\nCantidad de nodos: ");
    contadorNodos(raiz, &CONTADOR);
    printf("%d", CONTADOR);

    printf("\nCantidad de hojas: ");
    contadorHojas(raiz, &CONTADORHOJAS);
    printf("%d", CONTADORHOJAS);

    printf("\nCantidad de internos: ");
    contadorInternos(raiz, &CONTADORINTERNOS);
    printf("%d", CONTADORINTERNOS);
    printf("\n\n<< Finalizado >>\n\n");
    return 0;
}
