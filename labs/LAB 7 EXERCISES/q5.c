#include<stdio.h>
int main()
{
	int row,col,i,j,max;
	printf("\nEnter the no of rows and columns respectively: ");
	scanf("%d %d",&row,&col);
	int matrix[row][col];
	
	//taking input 
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		scanf("%d",&matrix[i][j]);
		printf("\n");
	}
	
	//displaying the matrix
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		printf("%d ",matrix[i][j]);
		printf("\n");
	}
	
	//finding the maximum
	max=matrix[0][0];
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		if(matrix[i][j]>max)
		max=matrix[i][j];
	}
	printf("\nThe maximum of all elements is %d",max);	
}

