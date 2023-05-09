#include <stdlib.h> 
#include <stdio.h>

struct lista{
    int clave;
    struct lista *sig; 
};

int main(){
    struct lista *L;
    struct lista *p;
    int suma;
    int i;
    L = NULL; /* Crea una lista vacia */
    for (i = 4; i >= 1; i--){
        /* Reserva memoria para un nodo */
        p = (struct lista *) malloc(sizeof(struct lista)); 
        p->clave = i;
        p->sig = L;
        L = p;
    }
    p = L;
    suma = 0;
    while (p != NULL) { 
        printf("%d, ", p->clave); 
        suma = suma + p->clave;
        p = p->sig;
    }
    printf("Suma = %d\n", suma);
    return 0; 
}