//Apuntador a una funcion
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main ()
{
	double (*f)(double); //apuntaremos a una funcion, delcaramos el apuntador *apuntador(tipo de variable)
	double x=M_PI/3, y; //M_PI ya esta definida la funcion pi
	f=sin;   //apunta hacia el seno
	y=f(x);
	printf("sen(x)= %lf \n",y);
	f=cos;   //apunta hacia el coseno
	y=f(x);
	printf("cos(x)= %lf",y);
	getch();
	return 0;
}
