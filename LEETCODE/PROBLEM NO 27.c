/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
	int i,flag=0,k=0,x=0;
	*returnSize=numsSize;
	int* ans= (int* ) malloc(*returnSize*sizeof(int));
	for(i=0;i<*returnSize;i+=2)
	{
		ans[i]=nums[x];
		x++;
	}
		for(i=1;i<*returnSize;i+=2)
	{
		ans[i]=nums[n+k];
		k++;
	}
	return ans;
}
#include<stdio.h>
int main()
{
	int numsSize,i;
	printf("\nEnter the size of the array:  ");
	scanf("%d",&numsSize);
	
	int nums[numsSize];
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	
	int n=numsSize/2;
	int returnSize;
	int *ptr=shuffle(nums,numsSize,n,&returnSize);
	
	for(i=0;i<returnSize;i++)
	{
		printf("%d ",*(ptr+i));
	}
	free(ptr);
}
