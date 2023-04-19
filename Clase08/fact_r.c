#include <stdio.h>

int factorial_r(int n);
int factorial_i(int n);

int main(){
    int n, fact;
    n = 6;
    fact = factorial_r(n);
    printf("Factorial recursivo: %d\n", fact);
    fact = factorial_i(n);
    printf("Factorial iterativo: %d\n", fact);
    return 0;
}

int factorial_r(int n){
    if (n == 0)
        return 1;
    else
        return n * factorial_r(n-1);
}

int factorial_i(int n){
    int fact, i;
    fact = 1;
    i = 1;
    while (i <= n){
        fact = fact * i;
        i = i + 1;
    }
    return fact;
}