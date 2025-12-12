/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) 
{
 	int i,j;
 	*returnSize=numsSize;
 	int *newarr= (int*) malloc(*returnSize*sizeof(int));
	for(i=0;i<numsSize;i++)
	{
		newarr[i]=0;
		for(j=i;j>=0;j--)
		{
			newarr[i]+=nums[j];
		}
	} 

	return newarr;  
    
}
#include<stdio.h>
int main()
{
	int numsSize,i;
	printf("\nEnter the numsSize:  ");
	scanf("%d",&numsSize);
	
	int nums[numsSize];
	int returnsize;
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	int *newarr=runningSum(nums,numsSize,&returnsize);
	
	for(i=0;i<returnsize;i++)
	{
		printf("%d ",*(newarr+i));
	}
	free(newarr);
}



