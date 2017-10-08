#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std; //agregar este paquete para recibir informacion y para leer

struct Byte
{
	unsigned int bit7:1;
	unsigned int bit6:1;
	unsigned int bit5:1;
	unsigned int bit4:1;
	unsigned int bit3:1;
	unsigned int bit2:1;
	unsigned int bit1:1;
	unsigned int bit0:1;
};

int main ()
{
	Byte a;
	a.bit7=1;
	a.bit6=1;
	a.bit5=1;
	a.bit4=1;
	a.bit3=1;
	a.bit2=1;
	a.bit1=1;
	a.bit0=1;
	cout<<a.bit7;
	getch();
	return 0;
}
