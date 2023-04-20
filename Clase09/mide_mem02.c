#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <sys/resource.h>
#include <unistd.h>
int main(){
    int i = 0;
    int megas = 1024*1024;
    int cantidad = 20;
    struct rusage usada;
    while (i++ < 10){
        void *m = malloc(cantidad*megas);
        memset(m, 0, cantidad*megas);
        getrusage(RUSAGE_SELF, &usada);
        printf("(%2d) Uso de memoria = %12ld Kb (%4ld Mb)\n", i, usada.ru_maxrss, usada.ru_maxrss/megas);
        sleep(2);
    }
    printf("Dejamos pasar 5 segundos y medimos de nuevo.\n");
    sleep(5);
    getrusage(RUSAGE_SELF, &usada);
    printf("(%2d) Uso de memoria = %12ld Kb (%4ld Mb)\n", i, usada.ru_maxrss, usada.ru_maxrss/megas);  
    return 0;
}