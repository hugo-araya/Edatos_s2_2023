#include <stdio.h>
#include "head_lista1.h"

int main(){
    LISTA l;
    l = crea_lista();
    muestra_lista(l);
    l = add_final(l, 5);
    muestra_lista(l);
    l = add_final(l, 7);
    muestra_lista(l);
    l = add_final(l, 9);
    muestra_lista(l);
    l = add_inicio(l, 6);
    muestra_lista(l);
    l = add_inicio(l, 8);
    muestra_lista(l);
    l = add_final(l, 3);
    muestra_lista(l);
    l = del_final(l);
    muestra_lista(l);
    l = del_final(l);
    muestra_lista(l);
    l = del_final(l);
    muestra_lista(l);
    l = del_final(l);
    muestra_lista(l);
    l = del_final(l);
    muestra_lista(l);
    l = del_final(l);
    muestra_lista(l);
    l = add_inicio(l, 6);
    largo(l);
    l = del_inicio(l);
    muestra(l);
    largo(l);
    return 0;
}
