#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <sys/resource.h>
#include <unistd.h>

int factorial_i(int n);
int  megas = 1024*1024;
struct rusage usada;

int main(){
    int n, fact;
    n = 10;
    fact = factorial_i(n);
    printf("Factorial iterativo: %d\n", fact);
    getrusage(RUSAGE_SELF, &usada);
    printf("Uso de memoria = %12ld Kb (%4ld Mb)\n", usada.ru_maxrss, usada.ru_maxrss/megas);
    return 0;
}

int factorial_i(int n){
    int fact, i;
    getrusage(RUSAGE_SELF, &usada);
    printf("Uso de memoria = %12ld Kb (%4ld Mb)\n", usada.ru_maxrss, usada.ru_maxrss/megas);
    fact = 1;
    i = 1;
    while (i <= n){
        fact = fact * i;
        i = i + 1;
    }
    return fact;
}