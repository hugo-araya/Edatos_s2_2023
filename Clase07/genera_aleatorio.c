#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int numero,i; 
    srand(time(0));
    numero = 1000000; 
    for (i=0; i< numero; i++)
    printf("%d\n",rand()%100000); 
    return 0;
}
