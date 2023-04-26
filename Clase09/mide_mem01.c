#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rusage usada;
    getrusage(RUSAGE_SELF, &usada);
    printf("Memoria utilizada: < %ld > B\n", usada.ru_maxrss);
    return 0;
}