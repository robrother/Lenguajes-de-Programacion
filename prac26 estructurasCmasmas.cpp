//estructuras de datos
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std; //agregar este paquete para recibir informacion y para leer

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

ostream &operator<<(ostream &s,Complejo a)
{
	s<<a.real;
	if (a.imag < 0)
	{
		s<<"-"<<-a.imag<<"i\n";
	}
	else
	{
		s<<"+"<<a.imag<<"i\n";
	}
	return s;
}


int main()
{
	Complejo a,b,c;
	cout<<"a= ";cin>>a.real;
	cin>>a.imag;
	cout<<"b= ";cin>>b.real;
	cin>>b.imag;
	c=a+b;
	cout<<"a= "<<a;
	cout<<"b= "<<b;
	cout<<"c= "<<c;
	
	getch();
	return 0;
}


