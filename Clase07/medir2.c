#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#define MAXIMO 100000

void burbuja(int array[], int N);
void shellsort(int array[], int N);
int main(){
    struct timeval t_1,t_2;   
    double tiempo; 
    int i, N, cont;
    int array[MAXIMO];
    int numero;
    FILE *ent;
    ent = fopen("aleatorio.txt", "r");
    for (i = 0; i < MAXIMO; i++){
        fscanf(ent,"%d",&numero);
        array[i] = numero;
    }

    for (cont = 10000; cont < MAXIMO; cont = cont + 10000){
        // Bloque a medir el tiempo  
        gettimeofday(&t_1,NULL); 

        //burbuja(array, cont);
        shellsort(array, cont);
        gettimeofday(&t_2,NULL); 
        tiempo = (t_2.tv_sec - t_1.tv_sec)*1000 + (t_2.tv_usec - t_1.tv_usec)/1000;
        printf("Para %d elementos demoro %g segundos\n", cont, tiempo/1000); 
    }
    return 0;
}

void burbuja(int array[], int N){
    int i, j, aux;
    for(i=0;i<N-1;i++){   
        for(j=0;j<N-i-1;j++){ 
            if(array[j+1]<array[j]){       
                aux=array[j+1];       
                array[j+1]=array[j];  
                array[j]=aux;
            }   
        } 
    } 
}

void shellsort(int array[], int N){
    int salto, cambios, i, aux;
    for(salto = N/2; salto!=0; salto = salto/2){
        cambios = 1;
        while (cambios != 0){
            cambios=0; 
            for(i = salto;i < N; i++){
                if(array[i-salto]>array[i]){ 
                    aux=array[i];
                    array[i]=array[i-salto]; 
                    array[i-salto]=aux; 
                    cambios++;
                } 
            }
        }
    }
}