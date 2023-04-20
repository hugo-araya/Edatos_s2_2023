#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <sys/resource.h>
#include <unistd.h>

int factorial_r(int n);
int megas = 1024*1024;
struct rusage usada;

int main(){
    int n, fact;
    n = 10;
    fact = factorial_r(n);
    printf("Factorial recursivo: %d\n", fact);
    getrusage(RUSAGE_SELF, &usada);
    printf("Uso de memoria = %12ld Kb (%4ld Mb)\n", usada.ru_maxrss, usada.ru_maxrss/megas);
    return 0;
}

int factorial_r(int n){
    getrusage(RUSAGE_SELF, &usada);
    printf("Uso de memoria = %12ld Kb (%4ld Mb)\n", usada.ru_maxrss, usada.ru_maxrss/megas);
    if (n == 0)
        return 1;
    else
        return n * factorial_r(n-1);
}