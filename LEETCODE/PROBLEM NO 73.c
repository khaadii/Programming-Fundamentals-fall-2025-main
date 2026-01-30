#include<limits.h>
int thirdMax(int* nums, int numsSize) {
    long int h1=LONG_MIN,h2=LONG_MIN,h3=LONG_MIN;
    long int i,hh1,hh2;
    if(numsSize==1)
    return nums[0];
    
    else if(numsSize==2)
    {
    	if(nums[0]<nums[1])
    	{
    		return nums[1];
		}
		else
		return nums[0];
	}
    for(i=0;i<numsSize;i++)
    {
    	if(nums[i]>h1)
    	{
    		hh1=h1;
    		h1=nums[i];
    		hh2=h2;
    		h2=hh1;
    		h3=hh2;
		}
		else if(nums[i]>h2 && nums[i]!=h1)
		{
			hh2=h2;
			h2=nums[i];
			h3=hh2;
		}
		else if(nums[i]>h3 && nums[i]!=h2 && nums[i]!=h1)
		{
			h3=nums[i];
		}
	}
	if(h3==LONG_MIN)
	return h1;
	return h3;
}
#include<stdio.h>
int main()
{
	int numsSize;
	printf("\nEnter the numsSize:  ");
	scanf("%d",&numsSize);
	int nums[numsSize];
	int i;
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	int ans=thirdMax(nums,numsSize);
	printf("\nAns:  %d",ans);
	return 0;
}
