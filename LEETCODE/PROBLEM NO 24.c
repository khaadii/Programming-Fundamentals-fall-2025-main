/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) 
{
	int i;
	*returnSize=numsSize;
    int *ans= (int*) malloc(*returnSize*sizeof(int));
    for(i=0;i<*returnSize;i++)
    {
    	ans[i]=nums[nums[i]];
	}
	return ans;
}
#include<stdio.h>
int  main()
{
	int numsSize,i;
	printf("\nEnter the numsSize:  ");
	scanf("%d",&numsSize);
	
	int nums[numsSize];
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	int returnSize;
	int *ptr=buildArray(nums,numsSize,&returnSize);
	
	for(i=0;i<returnSize;i++)
	{
		printf("%d ",*(ptr+i));
	}
	free(ptr);
}
