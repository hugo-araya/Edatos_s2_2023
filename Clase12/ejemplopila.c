#include <stdio.h>
#include "naipe.h"
#include "PILA.h"

void setup(PILA *baraja, PILA *mesa, PILA *jugador1, PILA *jugador2, PILA *jugador3, PILA *jugador4);

int main(){
    int naipe[52][2];
    PILA *baraja, *mesa, *jugador1, *jugador2, *jugador3, *jugador4;
    int elem1, elem2, i;

    genera(naipe);
    desordena(naipe);
    setup(baraja, mesa, jugador1, jugador2, jugador3, jugador4);
    for (i = 0; i < 52; i++){
        push(baraja, naipe[i][0], naipe[i][1]);
    }
    pop(baraja, &elem1, &elem2);
    if (elem1%2 == 0){
        push(jugador1, elem1, elem2);
    }
    else{
        push(mesa, elem1, elem2);
    }
    if (vacia(jugador1)){
        printf("Pila del jugador esta vacia\n");
    }
    else{
        pop(jugador1, &elem1, &elem2);
        printf("Pop del Jugador: %3d - %3d\n", elem1, elem2);
    }

    if (vacia(mesa)){
        printf("Mesa vacia\n");
    }
    else{
        pop(mesa, &elem1, &elem2);
        printf("Pop de la mesa: %3d - %3d\n", elem1, elem2);
    }
    return 0;
}

void setup(PILA *baraja, PILA *mesa, PILA *jugador1, PILA *jugador2, PILA *jugador3, PILA *jugador4){
    crear(&baraja);
    crear(&mesa);
    crear(&jugador1);
    crear(&jugador2);
    crear(&jugador3);
    crear(&jugador4);
}