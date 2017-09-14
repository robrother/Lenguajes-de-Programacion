#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

double **Mult(double **A, double **B, int am, int an, int bm, int bn)
{
	if (am != bn)
	 return NULL;
	double **c;
	double s;
	int i,j,k,m,n; //n filas m columnas
	n=an;
	m=bm;
	c=(double**) malloc(n*sizeof(double*));
	for (i=0;i<n;i++)
		c[i]=(double *)malloc(m*sizeof(double));
	for(i=0;i<an;i++)
	{
		for(j=0;j<bm;j++)
		{
			s=0;
			for(k=0;k<am;k++)
			{
				s+=A[i][k]*B[k][j];
			}//k
			c[i][j]=s;
		}
	}
	return c;
}

int main ()
{
	double **A,**B,**C;
	int am,bm,cm,an,bn,cn,i,j;
	am=3;
	an=2;
	bm=2;
	bn=3;
	A=(double **)malloc(an*sizeof(double*));
	B=(double **)malloc(bn*sizeof(double*));
	for(i=0;i<an;i++)
	{
		A[i]=(double *)malloc(am*sizeof(double));
		for(j=0;j<am;j++)
		A[i][j]=rand()%10;
	}
	for(i=0;i<bn;i++)
	{
		B[i]=(double *)malloc(bm *sizeof(double));
		for(j=0;j<bm;j++)
		B[i][j]=rand()%10;
	}
	C=Mult(A,B,am,an,bm,bn);
	cm=bm;
	cn=an;
	printf("A: \n");
	for(i=0;i<an;i++)
	{
		for(j=0;j<am;j++)
			printf("%lf \t",A[i][j]);
			printf("\n");
	}
    printf("B: \n");
	for(i=0;i<bn;i++)
	{
		for(j=0;j<bm;j++)
			printf("%lf \t",B[i][j]);
			printf("\n");
	}
    printf("C: \n");
	for(i=0;i<cn;i++)
	{
		for(j=0;j<cm;j++)
			printf("%lf \t",C[i][j]);
			printf("\n");
	}
	getch();
	return 0;
}
