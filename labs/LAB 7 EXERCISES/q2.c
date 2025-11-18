#include<stdio.h>
int main()
{
	int row,col,count=0,i,j;
	printf("\nEnter the number of rows:  ");
	scanf("%d",&row);
	printf("\nEnter the number of columns:  ");
	scanf("%d",&col);
	int arr[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		scanf("%d",&arr[i][j]);
		if(arr[i][j]==0) 
		count++;	
		}

		printf("\n");
	}
	if(count>=((row*col)/2.0))
	printf("\nSparse matrix");
	else
	printf("\nNot sparse matrix");
	
	
	
}


