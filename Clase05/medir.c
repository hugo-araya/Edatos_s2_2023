#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAXIMO 200000
int main(){
    time_t t_1,t_2;    
    int i,j,aux, N, cont;
    int array[MAXIMO], numero;
    // t_1=time(NULL); 
    for (i=0; i < MAXIMO;i++ ){
        array[i] = rand();
    }
    /*
    for (i=0; i < N;i++ ){
        printf("%d\n", array[i]);
    }
    */
    for (cont = 10000; cont < MAXIMO; cont = cont + 10000){
        // Bloque a medir el tiempo  
        N = cont;  
        t_1=time(NULL); 
        for(i=0;i<N-1;i++){   
            for(j=0;j<N-i-1;j++){ 
                if(array[j+1]<array[j]){       
                    aux=array[j+1];       
                    array[j+1]=array[j];  
                    array[j]=aux;
                }   
            } 
        } 
        t_2=time(NULL);
        printf("%5d;%lf\n", N, difftime(t_2,t_1)); 
    }
/*
    for (i=0; i < N;i++ ){
        printf("%d\n", array[i]);
    }
    printf("\n");
*/
    return 0;
}
