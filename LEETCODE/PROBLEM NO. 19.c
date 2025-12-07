#include<stdio.h>
int search(int* nums, int numsSize, int target) 
{
	int i;
	for(i=0;i<numsSize;i++)
	{
		if(nums[i]==target)
		return i;
	}	    
	return -1;
}
int main()
{
	int numsSize,target,i;
	printf("\nEnter the numsSize: ");
	scanf("%d",&numsSize);
	int nums[numsSize];
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	printf("\nEnter the target:  ");
	scanf("%d",&target);
	int result=search(nums,numsSize,target); 
	if(result==-1)
	printf("\nNot present");
	else
	printf("\nFound at index number: %d",result);
}
