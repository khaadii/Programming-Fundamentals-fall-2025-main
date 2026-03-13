int arraySign(int* nums, int numsSize) {
 int nonn=0,zero_flag=0;
	int i;
	for(i=0;i<numsSize;i++)
	{
		if(nums[i]==0)
		return 0;
		if(nums[i]<0)
		nonn++;
	}
	if(nonn%2==0)
	return 1;
	else
	return -1;
}
#include<stdio.h>
int main()
{
	int numsSize;
	printf("\nEnter the numsSize:  ");
	scanf("%d",&numsSize);
	printf("\nEnter the aray nums:  ");
	int i;
	int nums[numsSize];
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	int ans=arraySign(nums,numsSize);
	printf("\nAns:  %d",ans);
}
