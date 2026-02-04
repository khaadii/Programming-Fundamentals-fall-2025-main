/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int i,j;
    *returnSize=2;
    int* ans=malloc(3*sizeof(int));
    for(i=1;i<returnSize;i++)
    {
    	for(j=1;j<returnSize;j++)
    	{
    		if(i!=j)
    		{
    		if((numbers[i]+numbers[j])==target)
    		{
    			ans[0]=i;
    			ans[1]=j;
    			return ans;
			}
			}
		}
	}
    
    
}
#include<stdio.h>
int main()
{
	int numbersSize;
	scanf("%d",&numbersSize);
	int numbers[numbersSize+1];
	int i;
	for(i=1;i<numbersSize;i++)
	{
		scanf("%d",&numbers[i]);
	}
	int target;
	scanf("%d",&target);
	int returnSize;
	int* ans=twoSum(numbers,numbersSize,target,&returnSize);
	for(i=1;i<returnSize;i++)
	{
		printf("%d",ans[i]);
	}
	free(ans);
}
