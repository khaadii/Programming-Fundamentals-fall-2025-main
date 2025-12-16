/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) 
{
	int i,j,count;
	*returnSize=numsSize;
	int *ans= (int*) malloc(numsSize*sizeof(int));
	for(i=0;i<numsSize;i++)
	{
		count=0;
		for(j=0;j<numsSize;j++)
		{
			if(nums[j]<nums[i])
			{
			count++;	
			}	
		}
		ans[i]=count;		
	}
	return ans;    
}
#include<stdio.h>
int main()
{
	int numsSize,i;
	printf("\nEnter the size:  ");
	scanf("%d",&numsSize);
	int nums[numsSize];
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	int  returnSize;
	int *ptr=smallerNumbersThanCurrent(nums,numsSize,&returnSize);
	for(i=0;i<returnSize;i++)
	{
		printf("%d ",*(ptr+i));
	}
	free(ptr);
}
