#include <stdio.h>
#include "binarioB.h"

int main() {
    int cantNodos = 0;
    int cantHojas = 0;
    int balanceado;
    ARBOL *raiz = nuevoNodo(28);
    insertar(raiz, 11);
    insertar(raiz, 96);
    insertar(raiz, 21);
    insertar(raiz, 6);
    insertar(raiz, 97);
    insertar(raiz, 1);
    insertar(raiz, 30);
    insertar(raiz, 10);
    insertar(raiz, 2);
    printf("\nImprimiendo preorden\n");
    preorden(raiz);
    printf("\nImprimiendo inorden\n");
    inorden(raiz);
    printf("\nImprimiendo postorden\n");
    postorden(raiz);

    printf("\nCantidad de nodos: ");
    contadorNodos(raiz, &cantNodos);
    printf("%d", cantNodos);

    printf("\nCantidad de hojas: ");
    contadorHojas(raiz, &cantHojas);
    printf("%d", cantHojas);

    if (arbolBalanceado(raiz)) {
        printf("\nEsta Balanceado");
    }
    else {
        printf("\nNo esta Balanceado");
    }
}
