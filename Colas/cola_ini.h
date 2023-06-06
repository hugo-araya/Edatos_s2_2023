#include <stdlib.h>

struct tcola{
    int clave;
    struct tcola *sig;
};

typedef struct tcola COLA;

void crear(COLA **cola);
int vacia(COLA *cola);
void encolar(COLA **cola, int elem);
void desencolar(COLA **c1, int *elem);
void muestra_cola(COLA *cola);

// ----------------------------------------
void desencolar(COLA **c1, int *elem){
    COLA *aux;
    *elem = (*c1)->sig->clave;
    if ((*c1) == (*c1)->sig){
        free(*c1);
        *c1 = NULL;
    }
    else{
        aux = (*c1)->sig;
        (*c1)->sig = aux->sig;
        free(aux);
    }
}

void encolar(COLA **cola, int elem){
    COLA *nuevo;
    nuevo = (COLA *)malloc(sizeof(COLA));
    nuevo->clave = elem;
    if (*cola == NULL){
        nuevo->sig = nuevo;
    }
    else{
        nuevo->sig = (*cola)->sig;
        (*cola)->sig = nuevo;
    }
    (*cola) = nuevo;
}

int vacia(COLA *cola){
    return (cola == NULL);
}

void crear(COLA **cola){
    *cola = NULL;
}

void muestra_cola(COLA *cola){
    COLA *aux;
    aux = cola->sig;
    if (aux == NULL){
        printf("Vacia\n");
    }
    else{
        do {
            printf("%d - ", aux->clave);
            aux = aux->sig;
        }while (aux != cola->sig);
        printf("\n");
    }
}
