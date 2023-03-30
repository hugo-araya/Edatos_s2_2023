#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
	int i, pingo, ok, avanza;
	int p1=2, p2=2, p3=2, p4=2, p5=2, p6=2;
	// Dibujamos la pantalla inicial
	system("cls");
	gotoxy(18,1);
	printf("Hipodromo UCM");
	
	for (i=1; i <=6; i++){
		gotoxy(2,2*i+1); 
		printf("%d",i);
	}
	
	for(i=3; i<= 17; i++){
		gotoxy(76,i);
		printf("|");
	}
	
	// Suben Bandera
    srand(time(NULL));
	ok=1;
	while (ok != 0){
		pingo=(rand()%6)+1;
		avanza = (rand()%8)+1;
		gotoxy(1,18);
		printf("Pingo: %d",pingo);
		gotoxy(1,19);
		printf("Avanza: %d",avanza);
		sleep(1);
//		getchar();
		switch (pingo){
			case 1: gotoxy(p1,2*pingo+1);
					printf(" ");
					p1=p1+avanza;
					gotoxy(p1,2*pingo+1);
					printf("%d",pingo);
					if (p1>=76)ok=0;
					break;
					
			case 2: gotoxy(p2,2*pingo+1);
					printf(" ");
					p2=p2+avanza;
					gotoxy(p2,2*pingo+1);
					printf("%d",pingo);
					if (p2>=76) ok=0;
					break;
									
			case 3: gotoxy(p3,2*pingo+1);
					printf(" ");
					p3=p3+avanza;
					gotoxy(p3,2*pingo+1);
					printf("%d",pingo);
					if (p3>=76) ok=0;
					break;
					
			case 4: gotoxy(p4,2*pingo+1);
					printf(" ");
					p4=p4+avanza;
					gotoxy(p4,2*pingo+1);
					printf("%d",pingo);
					if (p4>=76) ok=0;
					break;
					
			case 5: gotoxy(p5,2*pingo+1);
					printf(" ");
					p5=p5+avanza;
					gotoxy(p5,2*pingo+1);
					printf("%d",pingo);
					if (p5>=76) ok=0;
					break;					
					
			case 6: gotoxy(p6,2*pingo+1);
					printf(" ");
					p6=p6+avanza;
					gotoxy(p6,2*pingo+1);
					printf("%d",pingo);
					if (p6>=76) ok=0;
					break;
		}																				
	}
	gotoxy(1,18); printf("Caballo ganador es el numero %d",pingo);
	gotoxy(1,19); printf("                            ---");	
}
	
