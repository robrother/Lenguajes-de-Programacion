#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int atoi(char num[])
{
	int n,i,j,len=-1;
	while(num[++len]!=0);
	n=0;
	for(i=0;i<len;i++)
	{
		n*=10;
		n+=num[i]-48;
	}
	return n;
}

int main()
{
	int n;
	char num[12];
	printf("Ingrese una cadena de caracteres: \n");
	printf("n = ");
	gets (num);
	n = atoi(num);
	printf("La cadena convertida a entero es\n");
	printf("n = %d",n);
	getch();
	return 0;
}




