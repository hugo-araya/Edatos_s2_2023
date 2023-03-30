#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int i;
	int min, max;
	srand(time(0)); // Inicia el proceso aleatorio

	min = 2;
	max = 6;
	
	for(i=0;i < 5;i++)	{
		printf("\nIteracion %d -----------------------------------------------\n",i);
		printf("Aleatorio                : %d\n", rand());
		printf("Entre 0 y max (%d)        : %d\n", max, rand()%(max+1));
		printf("Entre 1 y max (%d)        : %d\n", max,rand()%max + 1 );
		printf("Entre min (%d) y max (%d)  : %d\n", min, max, (rand()%(max - min + 1)) + min);
		
	}
	printf("\n");
	return 0;
}
