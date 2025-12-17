int findNumbers(int* nums, int numsSize) 
{
	    int i,nodig,count=0;
	    for(i=0;i<numsSize;i++)
	    {
	    	nodig=0;
	    	while(nums[i]!=0)
	    	{
	    		nums[i]=nums[i]/10;
	    		nodig++;
			}
			if(nodig%2==0)
			count++;
		}
		return count;
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
	int ans=findNumbers(nums,numsSize);
	printf("\n%d",ans); 
}
