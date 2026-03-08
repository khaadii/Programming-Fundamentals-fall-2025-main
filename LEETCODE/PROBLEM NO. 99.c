#include<stdlib.h>
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
	*returnSize=numRows;
	int** ans=malloc((*returnSize)*sizeof(int *));
	int i,j,k;
	for(i=0;i<numRows;i++)
	{
		ans[i]=malloc((i+1)*sizeof(int));
		for(j=0;j<=i;j++)
		{
			if(j==0)
			ans[i][j]=1;
			else if(i==j)
			ans[i][j]=ans[i-1][j-1];
			else
			ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
		}
	}
	*returnColumnSizes=malloc(numRows*sizeof(int));
	for(i=0;i<numRows;i++)
	{
		(*returnColumnSizes)[i]=i+1;	
	}
	return ans;
}
#include<stdio.h>
int main()
{
	int numRows;
	printf("\nEnter the numRows:  ");
	scanf("%d",&numRows);
	int returnSize;
	int* returnColumnSizes;
	int** ans=generate(numRows,&returnSize,&returnColumnSizes);
	int i,j;
	for(i=0;i<returnSize;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<numRows;i++)
	{
		free(ans[i]);
		
	}
	free(ans);
	free(returnColumnSizes);
}

