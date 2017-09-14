#include <stdio.h>
#include <stdlib.h>

//programa para convertir de decimal a binario

int main()
{
	int x, i, b;
	
	printf("x = ");
	scanf("%d",&x);
	
	for(i=0;i<32;i++)
	{ 
	   b = x>>(31-i);
	   b = b&1;
	   printf("%d",b);  
	}
system ("pause");
	
}
