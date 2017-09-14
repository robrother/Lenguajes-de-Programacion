#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

//graficar una funcion
double f(double x)
{
	double y;
	//y=x*x;
	y=x;
	//y=14*sin(x);
	//y=sin(x); y=x;
	return y;
}
//derivada
double der(double x)
{
	double d;
	double h=0.000001;
	d=(f(x+h)-f(x))/h;
	return d;
}
//integral
double integral(double x)
{
	double in,b,y;
	b=0.00001;
	in=0.0;
	if (x<0)
	{
		for (y=x;y<=0;y+=b)
		{
			in -= b*f(y);			
		}
	}
	else
	{
		for(y=0.0;y<=x;y+=b)
		{
			in += b*f(y);
		}
	}
	return in;
}

int main()
{
	char cad[30][80];
	int i,j;
	double x;
	for(i=0;i<30;i++)
	{
		for (j=0;j<79;j++)
			cad[i][j]=' ';
		cad[i][j]=0;	
	}
	//funcion f(x)
	for(x=-10,j=0;j<79;x+= 20.0/79,j++)
	{
		i=15-f(x);
		if(i>=0&&i<30)
			cad[i][j]='*';
	}
	//derivada
	for(x=-10,j=0;j<79;x+= 20.0/79,j++)
	{
		i=15-der(x);
		if(i>=0&&i<30)
			cad[i][j]='0';
	}
	//integral
	for(x=-10,j=0;j<79;x+= 20.0/79,j++)
	{
		i=15-integral(x);
		if(i>=0&&i<30)
			cad[i][j]='w';
	}	
	for(i=0;i<30;i++)
		puts(cad[i]);
	printf("%lf",integral(-5.0));
	getch();
	return 0;
}
