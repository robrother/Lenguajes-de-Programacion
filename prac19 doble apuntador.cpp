#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
/*
int main()
{
	char a;
	char *p;
	char **q;
	a='A';
	p=&a;
	q=&p;
	printf("p=%p, q=%p",p,q);
	**q='B';
	printf("\n a=%c",a);
	getch();
	return 0;
}
*/

int main ()
{
	char **x;                                           //doble apuntador
	int i,j;
	x=(char**)malloc(20*sizeof(char *));                //contiene 20 apuntadores tipo char
	for(i=0;i<20;i++)                                   //asignamos memoria a cada uno de esos apuntadores
	{
		x[i]=(char *) malloc (20);
	}
	for(i=0;i<20;i++)
	{
		for(j=0;j<19;j++)
		{
			x[i][j]='*';
		}
		x[i][j]=0;
	}
		for(i=0;i<20;i++)
		{
		puts(x[i]);
		}
	for(i=0;i<20;i++)
	{
		free(x[i]);
	}
	free(x);
	return 0;
	getch();
}



