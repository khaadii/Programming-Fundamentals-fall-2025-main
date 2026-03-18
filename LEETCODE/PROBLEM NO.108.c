void sortColors(int* nums, int numsSize) {
int no0=0,no1=0,no2=0;
int i;
for(i=0;i<numsSize;i++)
{
	if(nums[i]==0)
	no0++;
	else if(nums[i]==1)
	no1++;
	else if(nums[i]==2)
	no2++;	
}    
for(i=0;i<numsSize;i++)
{
	if(no0>0)
	{
	nums[i]=0;
	no0--;
	}
	else if(no1>0)
	{
	nums[i]=1;
	no1--;
	}
	else if(no2>0)
	{
	nums[i]=2;
	no2--;
	}
		
}
}
#include<stdio.h>
int main()
{
	int numsSize;
	printf("\nEnter the size of the array:  ");
	scanf("%d",&numsSize);
	printf("\nEnter the array:  ");
	int i,nums[numsSize];
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	sortColors(nums,numsSize);
	printf("\nPrinting the ans array:  ");
	for(i=0;i<numsSize;i++)
	{
		printf("%d, ",nums[i]);
	}
}
