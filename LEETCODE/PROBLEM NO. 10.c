int searchInsert(int* nums, int numsSize, int target);
#include<stdio.h>
int main()
{
	int nums[10000],target,numsSize,i;
	printf("\nEnter the size of the array:  ");
	scanf("%d",&numsSize);
	
	printf("\nEnter the array:  ");
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);		
	}	
	
	printf("\nEnter the target:  ");
	scanf("%d",&target);
	
	printf("\nThe target (is/should be at) index no. : %d",searchInsert(nums,numsSize,target));
}
int searchInsert(int* nums, int numsSize, int target)
{
	int i,p;
	for(i=0;i<numsSize;i++)
	{
		if(*(nums+i)==target)
			{
				p=i;
				return p;
			}
			else if(i!=numsSize-1)
			{
				if(*(nums+(i+1))>target)
				{
				p=i+1;
				return p;	
				}
			}
			else
			{
				p=i+1;
				return p;
			}
	}
}

