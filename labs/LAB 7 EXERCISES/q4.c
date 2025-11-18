#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("\nEnter the no. of rows");
	scanf("%d",&row);
	printf("\nEnter the no. of columns");
	scanf("%d",&col);
	if(row!=col)
	{
		printf("Matrix must be a square matrix to check symmetry");
		return 0;
	}
	int A[row][col],At[col][row];
	
	//inputting matrix
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		scanf("%d",&A[i][j]);
		printf("\n");
	}
	
	//setting the values of (A ka transpose matrix)
	
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			At[i][j]=A[j][i];
		}
	}
	
	//Displaying the transpose
		for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
			printf("%d ",At[i][j]);
			printf("\n");
	}
	
	//checking symmetric matrix or asymmetric
		for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
		if(At[i][j]!=A[i][j])
		{
		printf("matrix is Asymmetric matrix");
		return 0;	
		}

		}
	}
	printf(" matrix is symmetric matrix");
	
}
