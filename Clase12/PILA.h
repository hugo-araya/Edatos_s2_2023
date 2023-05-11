#include <stdlib.h>

struct PILITA{
    int dato1;
    int dato2;
    struct PILITA *sig;
};

typedef struct PILITA PILA;

void crear(PILA **pila);
int vacia(PILA *pila);
void push(PILA *pila, int elem1, int elem2);
void pop(PILA *pila, int *elem1, int *elem2);

void crear(PILA **pila){
    *pila = (PILA *) malloc(sizeof(PILA));
    (*pila)->sig = NULL;
}

int vacia(PILA *pila){
    return (pila->sig == NULL);
}

void push(PILA *pila, int elem1, int elem2){
    PILA *nuevo;
    nuevo = (PILA *) malloc(sizeof(PILA));
    nuevo->dato1 = elem1;
    nuevo->dato2 = elem2;
    nuevo->sig = pila->sig;
    pila->sig = nuevo;
}

void pop(PILA *pila, int *elem1, int *elem2){
    PILA *aux;
    aux = pila->sig;
    *elem1 = aux->dato1;
    *elem2 = aux->dato2;
    pila->sig = aux->sig;
    free(aux); 
}

