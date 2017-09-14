#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
/*//un numero entero lo pasa a una cadena de caracteres, invierte la secuencia de la cadena 
int main()
{
	int n, i=0,j;
	char num[12],c;
	printf("Ingrese un numero entero \n");
	printf("n = ");
	scanf("%d",&n);
	while (n!=0)
	{
		num[i++]=n%10+48;
		n/=10;		
	}
	num[i]=0;
	printf("La cadena de caracteres es\n");
	printf("n= %s", num);
	getch();
	return 0;
}
//un numero entero lo pasa a una cadena de caracteres
int main()
{
	int n, i=0,j;
	char num[12],c;
	printf("Ingrese un numero entero \n");
	printf("n = ");
	scanf("%d",&n);
	while (n!=0)
	{
		num[i++]=n%10+48;
		n/=10;		
	}
	for (j=0;j<i/2;j++)
		{
			c = num[j];
			num[j]=num[i-j-1];
			num[i-j-1]=c;			
		}
		num[i]=0;
		printf("La cadena de caracteres es\n");
		printf("n = %s",num);	
	getch();
	return 0;
}*/
//un numero entero lo pasa a una cadena de caracteres
int main()
{
	int n, i=0,j,k;
	char num[12],c;
	printf("Ingrese un numero entero \n");
	printf("n = ");
	scanf("%d",&n);
	while (n!=0)
	{
		num[i++]=n%10+'0';
		n/=10;		
	}
	for (j=0,k=i-1;j<i/2;j++,k--)
		{
			c = num[j];
			num[j]=num[k];
			num[k]=c;			
		}
		num[i]=0;
		printf("La cadena de caracteres es\n");
		printf("n = %s",num);	
	getch();
	return 0;
}
