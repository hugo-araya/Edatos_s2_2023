#include <stdio.h>

int potencia_r(int base, int exponente);
int potencia_i(int base, int exponente);

int main(){
    int base, exponente, potencia;
    base = 3;
    exponente = 4;
    potencia = potencia_r(base, exponente);
    printf("Potencia recursiva: %d\n", potencia);
    potencia = potencia_i(base, exponente);
    printf("Potencia iterativa: %d\n", potencia);
    return 0;
}

int potencia_r(int base, int exponente){
    if (exponente == 0)
        return 1;
    else
        return base * potencia_r(base, exponente - 1);
}

int potencia_i(int base, int exponente){
    int potencia, i;
    potencia = 1;
    i = 0;
    while (i < exponente){
        potencia = base * potencia;
        i = i + 1;
    }
    return potencia;
}