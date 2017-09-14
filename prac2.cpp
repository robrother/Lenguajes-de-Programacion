#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 
 // Convierte de numeros en decimal a numeros binarios

void bin(int x)
{
	if (x==0) 
	{return;
	}
	char c = x%2;
	bin(x/2);
	printf("%d",c);

}

int main()
{
	int x;
	
	printf("x = ");
	scanf("%d",&x);
	printf("x_2 = ");
	bin(x);
	getch();
    system ("pause");
	
}
