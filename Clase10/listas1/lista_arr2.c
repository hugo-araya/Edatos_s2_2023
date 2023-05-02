#include <stdio.h>
#include "head_lista1.h"

int main(){
    LISTA l, li;
    l = crea_lista();
    muestra_lista(l);
    l = add_final(l, 5);
    muestra_lista(l);
    l = add_final(l, 7);
    muestra_lista(l);
    l = add_final(l, 9);
    muestra_lista(l);

    li = invertir_lista(l);
    muestra_lista(li);

    return 0;
}
