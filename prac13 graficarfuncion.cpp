#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

//graficar una funcion
double f(double x)
{
	double y;
	y=14*sin(x);
	//y=sin(x); y=x;
	return y;
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
	
	for(x=-10,j=0;j<79;x+= 20.0/79,j++)
	{
		i=15-f(x);
		if(i>=0&&i<30)
			cad[i][j]='*';
	}
	for(i=0;i<30;i++)
		puts(cad[i]);
	getch();
	return 0;
}
