#ifdef _WIN32
  #include<windows.h>
#endif  

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void limpiar_pantalla();
void muestra(int b[][2]);
void genera(int b[][2]);
void desordena(int b[][2]);

int main(){
    int b[52][2];
    limpiar_pantalla();
    genera(b);
    muestra(b);
    printf("\n");
    desordena(b);
    printf("\n----------------\n");
    muestra(b);
    printf("\n");
    return 0;
}

void limpiar_pantalla(){
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void muestra(int b[][2]){
    for (int i = 0; i < 52; i++){
        printf("%3d - ",b[i][0]);        
        switch (b[i][1]){
            case 1: printf(" Corazon\n");
            break;
            case 2: printf(" Diamante\n");
            break;
            case 3: printf(" Pick\n");
            break;
            case 4: printf(" Trebol\n");
            break;
        }

    }
}

void genera(int b[][2]){
    int i;
	srand(time(0)); // Inicia el proceso aleatorio
    i = 0;
    while (i < 13){
        b[i][0] = i+1;
        b[i][1] = 1;
        i = i + 1;
    }
    while (i < 26){
        b[i][0] = i-13+1;
        b[i][1] = 2;
        i = i + 1;
    } 
    while (i < 39){
        b[i][0] = i-26+1;
        b[i][1] = 3;
        i = i + 1;
    } 
    while (i < 52){
        b[i][0] = i-39+1;
        b[i][1] = 4;
        i = i + 1;
    } 
}

void desordena(int b[][2]){
    int ori, des, aux1, aux2;
    for (int i = 0; i < 40; i ++){
        ori = rand()%51 + 1;
		des = rand()%51 + 1;
        aux1 = b[ori][0];
        aux2 = b[ori][1];
        b[ori][0] = b[des][0];
        b[ori][1] = b[des][1];
        b[des][0] = aux1;
        b[des][1] = aux2;
    }
}