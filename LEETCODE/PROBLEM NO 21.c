void moveZeroes(int* nums, int numsSize) 
{
	int i,j,temp;
	for(i=0;i<numsSize;i++)
	{
		if(nums[i]==0)
		{
		for(j=i+1;j<numsSize;j++)
		{
			if(nums[j]==0)
			continue;
			temp=nums[i];	
			nums[i]=nums[j];
			nums[j]=temp;
			break;
		}
		}
	}    
}
#include<stdio.h>
int main()
{
	int numsSize,i;
	printf("\nEnter the array size:  ");
	scanf("%d",&numsSize);
	int nums[numsSize];
	printf("\nEnter the array:  ");
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	 moveZeroes(nums,numsSize);
	for(i=0;i<numsSize;i++)
	{
		printf("%d ",nums[i]);
	}
	
}
