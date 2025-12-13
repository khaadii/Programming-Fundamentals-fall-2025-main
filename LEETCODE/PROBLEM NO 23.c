/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) 
{
	int i,j;
	*returnSize= 2*numsSize;
	int *ans= (int*) malloc((*returnSize) * sizeof(int));  
	for(i=0;i<numsSize;i++)
	{
		ans[i]=nums[i];
	}
	int k=0;
	for(j=i;j<(*returnSize);j++)
	{
		ans[j]=nums[k];
		k++;
	}
	return ans;	
}
#include<stdio.h>
int main()
{
	int numsSize,i;
	printf("\nEnter the numsSize:  ");
	scanf("%d",&numsSize);
	
	int nums[numsSize];
	printf("\nENter the array:  ");
	
	//taking input
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	
	int returnSize;
	
	int *ptr=getConcatenation(nums,numsSize,&returnSize);
	//printing answer array
	for(i=0;i<returnSize;i++)
	{
		printf("%d ",*(ptr+i));
	}
	free(ptr);
	
}

