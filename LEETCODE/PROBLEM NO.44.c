/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
	int *ans=(int *)malloc((*returnSize)*(sizeof(int)));
	int z;
	for(z=0;z<*returnSize;z++)
	{
		ans[z]=nums[z]*nums[z];
	}
	int  i,j,temp;
	for(i=0;i<*returnSize-1;i++)
	{
		for(j=0;j<*returnSize-1-i;j++)
		{
			if(ans[j]>ans[j+1])
			{
			temp=ans[j];
			ans[j]=ans[j+1];
			ans[j+1]=temp;	
			}
		}
	}
	printf("\nInside the function:  ");
	for(i=0;i<*returnSize;i++)
	{
		printf("%d ",ans[i]);
	}
	return ans;
}
int main()
{
	int numsSize,i;
	printf("\nEnter the size of array:  ");
	scanf("%d",&numsSize);
	int nums[numsSize];
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	int returnSize;
	int *ans=sortedSquares(nums,numsSize,&returnSize);
	printf("\nPrinting in main func:  ");
	for(i=0;i<returnSize;i++)
	{
		printf("\n%d ",*(ans+i));
	}
	free(ans);
	return 0;
}

