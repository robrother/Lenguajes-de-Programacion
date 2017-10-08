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

union chartobyte
{
	char c;
	Byte b;
};

ostream &operator<<(ostream &s,Byte b)
{
	s<<b.bit0;
	s<<b.bit1;
	s<<b.bit2;
	s<<b.bit3;
	s<<b.bit4;
	s<<b.bit5;
	s<<b.bit6;
	s<<b.bit7;
	return s;
} 

int main ()
{
	chartobyte a;
	a.c=0xaa; //10101010
	cout<<"a = "<<a.b;
	a.b.bit0 = 0;
	cout<<"\na = "<<a.c; //muestra el *
	cout<<"\na = "<<(int)a.c; //muestra el valor del * = 42
	getch();
	return 0;
}
