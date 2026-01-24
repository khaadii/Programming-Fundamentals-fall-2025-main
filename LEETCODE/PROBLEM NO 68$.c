int singleNumber(int* nums, int numsSize) 
{
	    int i,ans;
	    int a=1,j;
	    for(i=0;i<numsSize;i++)
	    {
	    	a=1;
	    	for(j=0;j<numsSize;j++)
	    	{
	    		if(i!=j)
	    		{
	    			if(nums[i]==nums[j])
					{
						a=0;
						break;	
					}	
				}
			}
			if(a)
			{
				return nums[i];
			}
		}
		return 0;
}
#include<stdio.h>
int main()
{
	int numsSize;
	printf("\nEnter the size of the array:  ");
	scanf("%d",&numsSize);
	int nums[numsSize],i;
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	int ans=singleNumber(nums,numsSize);
	printf("ans:  %d",ans);
	return 0;
}
