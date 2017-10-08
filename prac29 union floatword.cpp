#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std; //agregar este paquete para recibir informacion y para leer

struct word
{
	unsigned int bit31:1;
	unsigned int bit30:1;
	unsigned int bit29:1;
	unsigned int bit28:1;
	unsigned int bit27:1;
	unsigned int bit26:1;
	unsigned int bit25:1;
	unsigned int bit24:1;
	unsigned int bit23:1;
	unsigned int bit22:1;
	unsigned int bit21:1;
	unsigned int bit20:1;
	unsigned int bit19:1;
	unsigned int bit18:1;
	unsigned int bit17:1;
	unsigned int bit16:1;
	unsigned int bit15:1;
	unsigned int bit14:1;
	unsigned int bit13:1;
	unsigned int bit12:1;
	unsigned int bit11:1;
	unsigned int bit10:1;
	unsigned int bit9:1;
	unsigned int bit8:1;
	unsigned int bit7:1;
	unsigned int bit6:1;
	unsigned int bit5:1;
	unsigned int bit4:1;
	unsigned int bit3:1;
	unsigned int bit2:1;
	unsigned int bit1:1;
	unsigned int bit0:1;
};

union floattoword
{
	float f;
	word w; 
	int i;
};

ostream &operator<<(ostream &s,word w)
{
	s<<w.bit0;
	s<<w.bit1;
	s<<w.bit2;
	s<<w.bit3;
	s<<w.bit4;
	s<<w.bit5;
	s<<w.bit6;
	s<<w.bit7;
	s<<w.bit8;
	s<<w.bit9;
	s<<w.bit10;
	s<<w.bit11;
	s<<w.bit12;
	s<<w.bit13;
	s<<w.bit14;
	s<<w.bit15;
	s<<w.bit16;
	s<<w.bit17;
	s<<w.bit18;
	s<<w.bit19;
	s<<w.bit20;
	s<<w.bit21;
	s<<w.bit22;
	s<<w.bit23;
	s<<w.bit24;
	s<<w.bit25;
	s<<w.bit26;
	s<<w.bit27;
	s<<w.bit28;
	s<<w.bit29;
	s<<w.bit30;
	s<<w.bit31;
	return s;
} 

int main ()
{
	floattoword a;
	a.f=1.1; //10101010
	cout<<"a = "<<a.w;          //las tres variables estan compartiendo la misma localidad
	cout<<"\ni = "<<a.i;
	printf("\ni = %x",a.i);    //entero en hexadecimal
	getch();
	return 0;
}
