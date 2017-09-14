#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

/*int main ()
{
	char *cad; //no mezclar los apuntadores con las variables, en los arreglos si puedes
	cad=(char *) malloc (80); //se le tiene que asignar un espacio de memoria
	printf("cad = ");
	gets (cad);
	puts(cad);
	getch();
	free(cad);
	return 0;
}
*/


//para leer los 80 caracteres
int main ()
{
	char *cad; //no mezclar los apuntadores con las variables, en los arreglos si puedes
	cad=(char *) malloc (80); //se le tiene que asignar un espacio de memoria
	printf("cad = ");
	gets (cad);
	puts(cad);
	for (int i =0; cad[i]!=0;i++)//for(int i=0; *cad!=0;i++) //for(int i=0; i<79;i++)
	{
		printf("%c",cad[i]);//printf("%c",*cad);
		//cad++;                //se mueve a la siguiente direccion de memoria
	}
	getch();
	free(cad);
	return 0;
}

//la diferencia entre un apuntador y un arreglo es la asignacion de memoria
