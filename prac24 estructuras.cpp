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

int main()
{
	struct complejo a,b;
	a.real=10;
	a.imag=20;
	b=a;
	printf("b= %lf + %lfi",b.real,b.imag);
	getch();
	return 0;
}
