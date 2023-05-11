#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializa(int b[][2]);
void muestra(int b[][]);
void esta(int b[][], int col);

int main(){
	int i = 0, numero, mono, ok;
	int max1=13, max2=4;
	int b[52][2];
	int ok = 1;
	inicializa(b);
	srand(time(0)); // Inicia el proceso aleatorio
	
	while ok != 0{
		numero = rand()%max1 + 1;
		mono = rand()%max2 + 1;
		
	}
	printf("\n");
	return 0;
}

void inicializa(int b[][2]){
	int i, j;
	for (i=0; i < 52; i++){
		b[i][0]=0;
		b[i][1]=0;
	}
}

void muestra(int b[][]){
	for(int i = 0; i< 52; i++)
		print("%3d - %3d\n", b[i][0],b[i][1]);
	printf("\n");
}
void esta(int b[][], int col){
	int f = 52, col = 2;


};

