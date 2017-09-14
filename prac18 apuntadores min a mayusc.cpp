#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


char *upper(char *cad)
{
	char *ret;//declarar un aountador tipo char, es la variable donde vamos a regresar nuestra cadena convertida a mayusculas
	int i, len =-1;//va a recorrer cada uno de los caracteres//vamos a medir la longitud de la cadena
	while (cad[++len]!=0);
	ret = (char *)malloc(len+1);
	for(i=0; i<=len;i++)
	{
		if(cad[i]>=97&&cad[i]<=122)
		{
			ret[i]=cad[i]-32;
		}
		else
		{
			ret[i]=cad[i];
		}
	}
	return ret;
}

int main ()
{
	char *cad,*up;
	cad = (char *) malloc (80);
	printf("cad = ");
	gets (cad);
	up=upper(cad);
	puts(up);
	getch();
	free(cad);
	free(up);
	return 0;
}
