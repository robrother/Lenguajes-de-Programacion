#include <stdio.h>
#include <conio.h>
//visualiza un numero en punto flotante en su representacion binaria
int main()
{ float x=5.2;
  int a, i, b;
  int *p;
  p=(int *)&x;
  a=*p;
  for (i=31;i>=0;i--)
  	{
	  b=a>>i;
	  b&=1;
	  printf("%d",b);
	}
    getch();
	return 0;
}
