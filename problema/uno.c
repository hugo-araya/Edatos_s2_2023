#include <stdlib.h> 
#include <stdio.h>

struct lista{
    int clave;
    struct lista *sig; 
};

typedef struct lista NODO;

void del_nodo(NODO *L, int n){
    NODO *aux;
    aux = L;
    if (aux == NULL){
        printf("Vacia\n");
        return;
    }
    if (aux->clave == n){
        aux = aux->sig;
        L = aux;
        return;
    }
    while ((aux->sig !=NULL) && (aux->sig->clave != n)){
        aux = aux->sig;
    }
    aux->sig=aux->sig->sig;
}

void recorre(NODO *p){
    while (p != NULL) { 
            printf("%d, ", p->clave); 
            p = p->sig;
    }        
}

int main(){
    NODO *L;
    NODO *p;
    int suma;
    int i;
    int n;
    L = NULL; 
    for (i = 4; i >= 1; i--){
        p = (NODO *) malloc(sizeof(NODO)); 
        p->clave = i;
        p->sig = L;
        L = p;
    }
    n=2;
    p = L;
    del_nodo(p, n);
    recorre(p);
    suma = 0;
    while (p != NULL) { 
        suma = suma + p->clave;
        p = p->sig;
    }
    printf("Suma = %d\n", suma);
    return 0; 
}