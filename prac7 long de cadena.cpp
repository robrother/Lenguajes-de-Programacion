#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//programa que calcula la longitud de una cadena
int main ()

//calculamos la longitud de una cadena con un ciclo for
/*{
	char cad [80];
	int len;
	printf("cadena = ");
	gets(cad);
	for(len=0;cad[len]!=0;len++);
	//len--;
	printf("la longitud de la cadea es: %d",len);
	getch();
	return 0;	
}
//calculamos la longitud de una cadena con un while
{
	char cad [80];
	int len=0;
	printf("cadena = ");
	gets(cad);
	while(cad[len++]!=0);
	len--;
	printf("la longitud de la cadea es: %d",len);
	getch();
	return 0;	
}*/

//calculamos la longitud de una cadena con un while y quitamos el len--
{
	char cad [80];
	int len=-1;
	printf("cadena = ");
	gets(cad);
	while(cad[++len]!=0);
	printf("la longitud de la cadea es: %d",len);
	getch();
	return 0;	
}
