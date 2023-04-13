#include <stdio.h>

int secreto(int n);

int main(){
    int n = 10;
    printf("%d\n", secreto(n));
    return 0;
}

int secreto(int n){
    int i, aux, menor, mayor;
    if (n<=1){
        return 1; 
    }
    else{
        mayor = 1;
        menor = 1;
        for (i = 2; i <n; i++){
            aux = menor;
            menor = mayor;
            mayor = aux + menor;
        }
        return mayor;
    }
}