#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

//programa para la transpuesta de una matriz con el uso de apuntadores dobles
int **trans(int **M,int n)
{
	int **R;
	int i,j;
	R=(int **) malloc(n*sizeof (int *)):
	for (i=0;i<n;i++)
	{
		R[i]=(int *) malloc(n*sizeof(int));
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			R[i][j]=M[j][i];
		}
	}
		return R;
}

int main()
{
	int **A, **B;
	int i,j,n;
	printf("n= ");
	A=(int **) malloc(n*sizeof(int *));
	for(i=0;i<n;i++)
	{
		A[i]=(int *) malloc(n*sizeof(int));
		for (j=0;j<n;j++)
		{
			A[i][j]=rand ()%10;
		}
	}
	B=trans(A,n);
	printf("A: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",A[i][j]);
		printf("\n");
		{
			printf("B:\n");
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				printf("%d\t",B[i][j]);
				getch();
				for(i=0)
			}
		}
	}
	
}
