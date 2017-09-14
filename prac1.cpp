#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a, b, c;
	unsigned int d;
	a = 123;
	b = 0xf2;
	c = a&b;
	d = 012345;
	
	printf("a = %d, b = %i, c = %d, d=%d \n",a,b,c,d);
	system("pause");
	return 0;
	
}

