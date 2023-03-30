/*
Escriba una función que reciba tres argumentos de tipo entero a, b y c. 
La función deberá ordenarlos de menor a mayor. Al finalizar la función, 
la variable "a" deberá tener el valor menor y la variable "c" el valor mayor. 
Utilizar paso de argumentos por referencia. 
Realiza un programa que utilice dicha función e imprima los valores 
de a, b y c antes y después de la llamada a la función 
*/

#include<stdio.h>

void pro(int *a, int *b , int *c);


int main(){
    int a, b, c, *punt_a, *punt_b, *punt_c;;
	punt_a =&a;
	punt_b =&b;
	punt_c =&c;
    printf("\nIntroduce el valor de a:");
	scanf("%d",&a);
	printf("Introduce el valor de b:");
	scanf("%d",&b);
	printf("Introduce el valor de c:");
	scanf("%d",&c);
	
	printf("a=%d, b=%d, c=%d\n",a, b, c);
	
	pro(&a, &b, &c);
	
	printf("a=%d, b=%d, c=%d\n",*punt_a,*punt_b,*punt_c);
	
}
void pro(int *a, int *b, int *c){
    //funcion que ordena  los números ingresados 
    // por el usuario de mayor a menor 
		
	if(*a<*b && *b<*c){
		//Nada que hacer, ya están en orden
	}else if (*a<*c && *c<*b){
		int temp = *c;
		*c = *b;
		*b = temp;
	}else if (*b<*a && *a<*c){
		int temp = *b;
		*b = *a;
		*a = temp;
	}else if (*b<*c && *c<*a){
		int temp = *a;
		*a = *b;
		*b = *c;
		*c = temp;
	}else if (*c<*a&& *a<*b){
		int temp = *c;
		*c = *b;
		*b = *a;
		*a = temp;
	}else if (*c<*b&& *b<*a){
		int temp = *c;
		*c = *a;
		*a = temp;
	}
}