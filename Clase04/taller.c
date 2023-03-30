#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int selecciona_secreto(int , int);
void define_limites(int *l_i, int *l_s);

int main(){
    int secreto,lim_inf, lim_sup;
    define_limites(&lim_inf, &lim_sup);
    secreto = selecciona_secreto(lim_inf, lim_sup);
    printf("%d\n", lim_inf);
    printf("%d\n", lim_sup);
    printf("%d\n", secreto);    
    return 0;
}

int selecciona_secreto(int min, int max){
    srand(time(0));
    return rand()%(max - min + 1) + min;
}

void define_limites(int *l_i, int *l_s){
    printf("Limite inferior: ");
    scanf("%d", l_i);
    printf("Limite superiro: ");
    scanf("%d", l_s);
}