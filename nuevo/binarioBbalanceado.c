#include <stdio.h>
#include "binarioB.h"

int main() {
    int cantNodos = 0;
    int cantHojas = 0;
    int balanceado;
    ARBOL *raiz = nuevoNodo(50);
    insertar(raiz, 25);
    insertar(raiz, 75);
    insertar(raiz, 12);
    insertar(raiz, 35);
    insertar(raiz, 60);
    insertar(raiz, 90);
    insertar(raiz, 6);
    insertar(raiz, 20);
    insertar(raiz, 30);
    insertar(raiz, 40);
    insertar(raiz, 55);
    insertar(raiz, 65);
    insertar(raiz, 80);
    insertar(raiz, 95);

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
