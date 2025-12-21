int numIdenticalPairs(int* nums, int numsSize) {
	int i,j,ans=0;
	for(i=0;i<numsSize;i++)
	{
		for(j=i+1;j<numsSize;j++)
		{
			if(nums[i]==nums[j])
			ans++;
		}
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
		printf("\nEnter the array:  ");
	for(i=0;i<numsSize;i++)
	{
	scanf("%d",&nums[i]);	
	}
	int ans=numIdenticalPairs(nums,numsSize);
	printf("\nNumber of good pairs:  %d",ans);
	return 0;
}
