#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
/*
//programa para cambiar de minusculas a mayusculas
int main()
{	char cad[80];
	int len=-1, i;
	printf("cadena = ");
	gets(cad);
	while(cad[++len]!=0);
	for (i=0;i<len;i++)
		{
		 	if (cad[i]>96)
			 	cad[i]-= 32;
		}
	puts(cad);
	getch();
	return 0;	
}
*/
//programa para cambiar de minusculas a mayusculas evitando los caracteres especiales
int main()
{	char cad[80];
	int len=-1, i;
	printf("cadena = ");
	gets(cad);
	while(cad[++len]!=0);
	for (i=0;i<len;i++)
		{
		 	if (cad[i]>='a'&&cad[i]<='z')
			 	cad[i]-= 32;
		}
	puts(cad);
	getch();
	return 0;	
}
