#include<stdio.h>
#include "cola.h"

#ifdef _WIN32
  #include<windows.h>
#endif 
#define CAPACIDAD 12
#define SALIR 'Q'

void limpiar_pantalla();
void mayuscula(char *opcion);

int main(){
    COLA *pista, *espera, *auxiliar;
    char opcion;
    int aviones = 0;
    int patente, patente_a, ok;
    limpiar_pantalla();
    crear(&pista);
    crear(&espera);
    crear(&auxiliar);
    printf("Accion (E/S/Q): ");
    scanf("%c", &opcion);
    fflush(stdin);
    mayuscula(&opcion);
    while ( opcion != SALIR ){
        switch(opcion){
            case 'E':   printf("Patente : ");
                        fflush(stdin);
                        scanf("%d", &patente);
                        if (aviones < 12){
                            printf("Ingresando a la pista\n");
                            encolar(&pista, patente);
                            aviones++;
                        }
                        else {
                            printf("En espera\n");
                            encolar(&espera, patente);
                        }
                        muestra_lista(pista);
                        break;
            case 'S':   if (vacia(pista)){
                            printf("Pista esta vacia\n");
                        }
                        else{
                            printf("Patente : ");
                            fflush(stdin);
                            scanf("%d", &patente);
                            ok = 0;
                            while (!vacia(pista)){
                                desencolar(&pista, &patente_a);
                                if (patente != patente_a){
                                    encolar(&auxiliar, patente_a);
                                }
                                else{
                                    ok = 1;
                                }
                            }
                            if (ok == 1){
                                printf("Avioneta despachada\n");
                            }
                            else{
                                printf("No existe una avioneta con esa patente\n");
                            }
                            pista = auxiliar;
                            printf("Despegando del aerodromo\n");
                        }
                        break;
            default:    printf("Opcion no valida\n");
        }
        printf("Accion (E/S/Q): ");
        fflush(stdin);
        scanf("%c", &opcion);
        fflush(stdin);
        mayuscula(&opcion);
    }
    return 0;
}

void limpiar_pantalla(){
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

void mayuscula(char *opcion){
    if (*opcion == 'e') *opcion = 'E';
    if (*opcion == 's') *opcion = 'S';
    if (*opcion == 'q') *opcion = 'Q';
}