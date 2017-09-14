#include <stdio.h>
#include <conio.h>
//saca el maximo comun divisor entre dos numeros
int main()
{ int a, b, residuo;
  	printf("a,b= ");
  	scanf("%d,%d",&a,&b);
  	while(1)
  		{ 
  		  residuo=a%b;
  		  a=b;
  		  if(residuo==0)
  		  break;
  		  b=residuo;
  		}
	printf("MCD(a, b) = %d",b);
	getch();
	return 0;
	
}
