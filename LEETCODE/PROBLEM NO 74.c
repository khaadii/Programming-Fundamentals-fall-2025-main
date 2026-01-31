#include<stdlib.h>
void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    *matrixColSize=matrixSize;
	int i,j,k=matrixSize-1;
	
	//memory allocating for the ans matrix
    int **ans=malloc(matrixSize*sizeof(int*));
    for(i=0;i<matrixSize;i++)
	{
		ans[i]= malloc(matrixSize*sizeof(int));
	}
    
    for(i=0;i<matrixSize;i++)
	{
		for(j=0;j<matrixSize;j++)
		{
		ans[j][k]=matrix[i][j];
		}
		k--;
	}
	 for(i=0;i<matrixSize;i++)
	{
		for(j=0;j<matrixSize;j++)
		{
			matrix[i][j]=ans[i][j];
		}
	}
	//freeing the ans 
	for(i=0;i<matrixSize;i++)
	{
		free(ans[i]);
	}
	free(ans);
}
#include<stdio.h>
int main()
{
	int matrixColSize;
	int matrixSize;
	printf("\nEnter the matrix size:  ");
	scanf("%d",&matrixSize);
	int **matrix=malloc(matrixSize*sizeof(int*));
	int i,j;
	for(i=0;i<matrixSize;i++)
	{
		matrix[i]=malloc(matrixSize*sizeof(int));
		for(j=0;j<matrixSize;j++)
		{
		
			scanf("%d",&matrix[i][j]);
		}
	}
	rotate(matrix,matrixSize,&matrixColSize);
	for(i=0;i<matrixSize;i++)
	{
		for(j=0;j<matrixSize;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	//freeing the ans 
	for(i=0;i<matrixSize;i++)
	{
		free(matrix[i]);
	}
	free(matrix);
	return 0;
}
