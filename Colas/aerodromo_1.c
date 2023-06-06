#include<stdio.h>
#include "cola.h"

#ifdef _WIN32
  #include<windows.h>
#endif 

#define CAPACIDAD 12
#define SALIR 5

void limpiar_pantalla();
void mayuscula(char *opcion);
void menu();

int main(){
    COLA *pista, *espera, *auxiliar;
    int opcion;
    int aviones = 0;
    int patente, patente_a, ok;
    limpiar_pantalla();
    crear(&pista);
    crear(&espera);
    crear(&auxiliar);
    menu();
    scanf("%d", &opcion);
    while ( opcion != SALIR ){
        switch(opcion){
            case 1:   printf("Patente : ");
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
                        break;
            case 2:   if (vacia(pista)){
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
            case 3:     muestra_cola(pista, 1);
                        break;
            
            case 4:     muestra_cola(espera, 2);
                        break;
            default:    printf("Opcion no valida\n");
        }
        menu();
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

void menu(){
    printf("        AERODROMO INTERNACIONAL DE PANGUILEMO\n\n");
    printf("1 > Estacionar avioneta\n");
    printf("2 > Despegar avioneta\n");
    printf("3 > Mostrar estacionamiento\n");
    printf("4 > Mostrar cola de espera\n");
    printf("5 > Salir\n\n");
    printf("Opcion: ");
}