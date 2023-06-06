#include <ncurses.h>
#include <string.h>

void calculador(char *cade,int *X)
{
int contador;
	contador=strlen(cade);
	contador/=2;
	*X=(*X-contador);
}

int main()
{
char cadena[80];
int x=40,y=10;
	initscr();
	printw("Ingresa la cadena\n");
	refresh();
	scanw("%s", cadena);
	calculador(cadena,&x);
	mvprintw(y,x,"%s",cadena);
	refresh();
	endwin();
	return 0;
}