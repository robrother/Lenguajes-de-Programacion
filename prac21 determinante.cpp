#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

double Determinante(double **M, int n)
{
	double d,a;
	double **M1;
	int i,j,k,l;
	if(n==1)
		return M[0][0];
	M1=(double **)malloc ((n-1)* sizeof(double *));
	for (i=0;i<n-1;i++)
	M1[i]=(double *)malloc ((n-1) * sizeof(double)); //le damos memoria
	d=0;
	for (i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			for(k=0,l=0;k<n;k++)
			{
				if (k!=i)
				{
					M1[j-1][l++] = M[j][k]; //l da la posicion de la columna y j la fila
				}
			}//k
		}//j
	a=M[0][i]*((i%2==0)?1:-1);
	d+=a*Determinante(M1,n-1);
	}//i
	for(i=0;i<n-1;i++)
		free(M1[i]);
	free(M1);
	return d;	
}

int main ()
{
	double **M;
	double d;
	int n,i,j;
	printf("Introduzca el tamano de la matriz, n= ");
	scanf("%d",&n);
	M=(double **) malloc(n*sizeof(double));
	for (i=0;i<n;i++)
	{
		M[i]=(double*)malloc(n*sizeof(double));
		for (j=0;j<n;j++)
			M[i][j]=rand()%10;
	}
	d=Determinante(M,n);
	
	printf("M: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%lf \t",M[i][j]);
			printf("\n");
	}
	printf("Det=%lf",d);
	getch ();
	return 0;
}
