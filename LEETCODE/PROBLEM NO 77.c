int maximumCount(int* nums, int numsSize) {
    int i,pos=0,neg=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]<0)
        {
            neg++;
        }
        else if(nums[i]>0)
        {
            pos++;
        }

    }
    if(pos>neg)
    return pos;
    else
    return neg;
    
}
#include<stdio.h>
int main()
{
	int numsSize;
	scanf("%d",&numsSize);
	int nums[numsSize];
	int i;
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	int ans=maximumCount(nums,numsSize);
	printf("\nResult:  %d",ans);
	return 0;
}
