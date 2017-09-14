#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//Algoritmo de burbuja, sirve para ordenar una secuencia de numeros enteros
int main()
{
	int x[]={5,7,1,-1,15,20,0};
	int i,j,t;
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<7;j++)
		{
			if(x[j]<x[i])
			{
				t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
		}
	}
	for(i=0;i<7;i++)
	{
		printf("%d\t",x[i]);
	}
	getch();
	return 0;
}
