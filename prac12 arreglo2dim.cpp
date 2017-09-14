#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//arreglo de dos dimensiones
int main()
{
	char cad[10][80];
	int i;
	for(i=0;i<10;i++)
	{
		printf("Escribe una cadena %d:",i);
		gets(cad[i]);
	}
	for(i=0;i<10;i++)
	{
		puts(cad[i]);
	}
	getch();
	return 0;
}


