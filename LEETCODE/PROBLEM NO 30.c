int sumOfUnique(int* nums, int numsSize) 
{
	int i,sum=0,j,flag=0;
	for(i=0;i<numsSize;i++)
	{
		flag=0;
		for(j=0;j<numsSize;j++)
		{
			if(i!=j)
			{
			if(nums[i]==nums[j])
			{
				flag=1;	
				break;
			}		
			}
			
		}
		if(flag==0)
		sum+=nums[i];	
	}  
	return sum;  
}
#include<stdio.h>
int main()
{
	int numsSize,i;
	printf("\nEnter the size of the array:  ");
	scanf("%d",&numsSize);
	int nums[numsSize];
	printf("\nEnter the array:  ");
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	int ans=sumOfUnique(nums,numsSize);
	printf("\nSum:  %d",ans);
}
