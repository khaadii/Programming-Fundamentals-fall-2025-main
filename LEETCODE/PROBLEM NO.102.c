#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
int *left=malloc(numsSize*(sizeof(int)));
int *right= malloc(numsSize*(sizeof(int)));
*returnSize=numsSize;
int i;
left[0]=0;
right[numsSize-1]=0;
for(i=1;i<numsSize;i++)
{
	left[i]=left[i-1]+nums[i-1];
}
right[numsSize-1]=0;
for(i=numsSize-2;i>=0;i--)
{
	right[i]=right[i+1]+nums[i+1];
}
int *ans= (int*)malloc(numsSize*(sizeof(int)));
for(i=0;i<numsSize;i++)
{
	ans[i]=abs(left[i] - right[i]);
}
free(left);
free(right);
return ans;
}
int main()
{
	int numsSize;
	printf("\nEnter the numsSize");
	scanf("%d",&numsSize);
	printf("\nEnter the nums array:  ");
	int i,nums[numsSize];
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	int returnSize;
	int* ans=leftRightDifference(nums,numsSize,&returnSize);
	for(i=0;i<returnSize;i++)
	{
		printf("%d ",ans[i]);
	}
	free(ans);
}
