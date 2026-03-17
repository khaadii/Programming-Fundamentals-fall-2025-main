#include<stdio.h>
#include<stdlib.h>
int diagonalSum(int** mat, int matSize, int* matColSize) {
    int i,sum1=0,sum2=0;
    int j=matSize-1;
    int k=0;
    for(i=0;i<* matColSize;i++)
    {
        sum1+=mat[i][j];
        if(j!=k)
        sum2+=mat[i][k];


        j--;
        k++;
    }
    printf("\nsum of primiary diapgonal:   %d",sum2);
    printf("\nsum of secondaary diapgonal:   %d",sum1);
    return sum1+sum2;
}

int main()
{
	int matSize;
	printf("\nEnter the no. of rows and columns:  ");
	scanf("%d",&matSize);
	int matColSize=matSize;
	int** mat=malloc(matSize*sizeof(int *));
	printf("\nEnter the matrix:  ");
	int i,j;
	for(i=0;i<matSize;i++)
	{
		mat[i]=malloc(matColSize*sizeof(int));
		for(j=0;j<matColSize;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	int ans=diagonalSum(mat,matSize,&matColSize);
	printf("\nAns:  %d",ans);
	for(i=0;i<matSize;i++)
	{
		free(mat[i]);
	}
	free(mat);
}
