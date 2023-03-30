#include<stdio.h>

void funcion(int *a);

int main(){
    int a = 5;
    printf("a: %d\n",a);
    funcion(&a);
    printf("a: %d\n",a);
    return 0;
}

void funcion(int *a){
    *a = *a +1;
    printf("a: %d\n",*a);
}