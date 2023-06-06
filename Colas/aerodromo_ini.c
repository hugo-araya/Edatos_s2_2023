#include<stdio.h>
#include "cola_ini.h"

#ifdef _WIN32
  #include<windows.h>
#endif 
#define CAPACIDAD 12
#define SALIR 3

void limpiar_pantalla();

int main(){
    COLA *pista, *espera, *auxiliar;
    int opcion;
    int aviones = 0;
    int patente, patente_a, ok;
    limpiar_pantalla();
    crear(&pista);
    crear(&espera);
    crear(&auxiliar);
    printf("Accion (1 = Estacionar / 2 = Despegar / 3 = Quit): ");
    scanf("%d", &opcion);
    while ( opcion != SALIR ){
        switch(opcion){
            case 1:     printf("Patente : ");
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
                        muestra_cola(pista);
                        break;
            case 2:     if (vacia(pista)){
                            printf("Pista esta vacia\n");
                        }
                        else{
                            printf("Patente : ");
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
        printf("Accion (1 = Estacionar / 2 = Despegar / 3 = Quit): ");
        scanf("%d", &opcion);
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
