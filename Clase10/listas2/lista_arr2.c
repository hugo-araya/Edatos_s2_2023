#include <stdio.h>
#include "head_lista2.h"

int main(){
    LISTA *l;
    crea_lista(l);
    muestra(l);
    add_final(l, 5);
    muestra(l);
    add_final(l, 6);
    muestra(l);
    add_final(l, 7);
    muestra(l);
    add_inicio(l, 2);
    muestra(l);
    return 0;
}
