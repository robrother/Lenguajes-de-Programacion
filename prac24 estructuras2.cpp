//estructuras de datos
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

//struct palabra reservada pata las estructuras de datos
struct complejo
{
	double real;
	double imag;
}; //se cierra con ; la estrucrura

typedef struct complejo Complejo;

complejo suma(Complejo a, Complejo b) //funciona para sumar dos numeros complejos
{
	Complejo c;
	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;
	return c; 
}

void print(Complejo a) //funcion para imprimir el numero complejo
{
	printf("%lf %c %lfi", a.real,(a.imag<0)?' ':'+',a.imag);
}

complejo nuevo(double real, double imag)  //funcion para declarar un numero complejo
{
	complejo a;
	a.real = real;
	a.imag = imag;
	return a;
}

int main()
{
	Complejo a,b,c;
	a= nuevo(10,-10);
	b= nuevo(20,5);
	c= suma(a,b);
	printf("a= "); print (a);
	printf("\nb= "); print (b);
	printf("\nc= "); print (c);

	getch();
	return 0;
}


