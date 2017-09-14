#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
/*
//visualizamos una cadena
{ 
	char cad[]="Hola mundo";
	printf(cad);
	getch();
	return 0;
}

//solicitamos una cadena y la visualizamos, notese que el programa detecta como fin de cadena cuando ponemos un espacio
{
	char cad [80];
	printf("cadena = ");
	scanf ("%s",cad);
	puts (cad);
	getch();
	return 0;	
}
//solicitamos una cadena y la visualizamos, notese que el programa detecta como fin de cadena cuando ponemos un espacio 
//inicializamos la cadena con cero y mandamos a pantalla con printf
{
	char cad [80];
	printf("cadena = ");
	scanf("%s",&cad[0]);
	printf(cad);
	getch();
	return 0;	
}*/
//solicitamos una cadena y la visualizamos correctamente
{
	char cad [80];
	printf("cadena = ");
	gets(cad);
	puts(cad);
	getch();
	return 0;	
}
