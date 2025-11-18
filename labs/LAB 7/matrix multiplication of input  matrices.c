#include<stdio.h>
int main()
{
	int Arow,Acol,Brow,Bcol,i,j,k;
	printf("\nEnter the rows and columns of matrix A:  ");
	scanf("%d %d",&Arow,&Acol);
	printf("\nEnter the rows and columns of matrix B:  ");
	scanf("%d %d",&Brow,&Bcol);
	int A[Arow][Acol],B[Brow][Bcol],C[Arow][Bcol];
	if(Acol!=Brow)
	{
		printf("\nNot possible");
		return 0;
	}
	//Taking inputs for matrix A
	printf("\nNow enter the elements for matrix A:  ");
	for(i=0;i<Arow;i++)
	{
		for(j=0;j<Acol;j++)
		scanf("%d",&A[i][j]);
	}
	//Taking inputs for the matrix B
	printf("\nNow enter the elements for matrix B:  ");
	for(i=0;i<Brow;i++)
	{
		for(j=0;j<Bcol;j++)
		scanf("%d",&B[i][j]);
	}
	//Setting values
	for(i=0;i<Arow;i++)
	{
		for(j=0;j<Bcol;j++)
		{
			C[i][j]=0;
			for(k=0;k<Acol;k++)
			C[i][j]+=A[i][k]*B[k][j];
		}
	}
	
	//Printing the answer matrix 
		for(i=0;i<Arow;i++)
		{
			for(j=0;j<Bcol;j++)
			printf("%d ",C[i][j]);
			printf("\n");
		}
	
	
}
