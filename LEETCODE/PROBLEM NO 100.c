#include<stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    *returnSize=rowIndex+1;
    int** ans=malloc((*returnSize)*sizeof(int *));
	int i,j;
	for(i=0;i<=rowIndex;i++)
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
	
	int*result= ans[i-1];
	for(i=0;i<rowIndex;i++)
	{
		free(ans[i]);	
	}
	free(ans);
	return result;
}
#include<stdio.h>
int main()
{
	int rowIndex;
	printf("\nEnter the row number(row index):  ");
	scanf("%d",&rowIndex);
	int returnSize;
	int* ans=getRow(rowIndex,&returnSize);
	int i;
	for(i=0;i<returnSize;i++)
	{
			printf("%d ",ans[i]);
	}
	free(ans);
}
