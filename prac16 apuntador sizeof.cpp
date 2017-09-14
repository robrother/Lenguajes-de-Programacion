#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
/*
int main()
{
	char *p;
	printf("%d",sizeof(p));
	getch();
	return 0;
}*/

int main()
{
	char *p;
	char a='A';//se habia cargado el valor con A
	p=&a;//direccion de memoria que tiene la variable a
	printf("%p \n",p); //para saber la direccion de la memoria
	printf("%p, a=%c",p, *p);//para saber el valor a traves del apuntador
	*p='B';//para modificar el valor de esa direccion a traves del apuntador
	printf("\na=%c",a);
	getch();
	return 0;
}
