//estructuras de datos
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

//struct palabra reservada pata las estructuras de datos
struct Complejo // se cambio a mayuscula en C++
{
	double real;
	double imag;
}; //se cierra con ; la estrucrura

//typedef struct complejo Complejo; quitamos esta linea cuando usamos C++

Complejo suma(Complejo a, Complejo b) //funciona para sumar dos numeros complejos
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

Complejo nuevo(double real, double imag)  //funcion para declarar un numero complejo
{
	Complejo a;
	a.real = real;
	a.imag = imag;
	return a;
}

Complejo operator+(Complejo a, Complejo b)
{
	Complejo c;
	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;
	return c;
}

int main()
{
	Complejo a,b,c,d;
	a= nuevo(10,-10);
	b= nuevo(20,5);
	c=suma(a,b); //usando la funcion
	d= a+b;      //usando el operador
	printf("a= "); print (a);
	printf("\nb= "); print (b);
	printf("\nFuncion_suma c= "); print (c);
	printf("\nOperador_suma d= "); print (d);
	getch();
	return 0;
}


