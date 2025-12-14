/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int * kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) 
{
    int i,max=0;
    *returnSize=candiesSize;
    
    int *ans= (int*) malloc((*returnSize )*( sizeof(int)));
    
    for(i=0;i<candiesSize;i++)
    {
    	if(*(candies+i)>max)
    	max=*(candies+i);	
	}
	
	for(i=0;i<*returnSize;i++)
	{
		if((*(candies+i)+extraCandies)>=max)
		{
			*(ans+i)=1;
		}
		else
		{
			*(ans+i)=0;
		}
	}
	return ans;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int candiesSize,i;
	int extraCandies;
	printf("\nEnter the number of kids:  ");
	scanf("%d",&candiesSize);
	
	int candies[candiesSize];
	for(i=0;i<candiesSize;i++)
	{
	printf("\nEnter the candies, kid '%d' has:  ",i+1);
	scanf("%d",&candies[i]);
	}
	
	printf("\nEnter the extra candies:  ");
	scanf("%d",&extraCandies);
	
	int returnSize;
	
	int *ans=kidsWithCandies(candies,candiesSize,extraCandies,&returnSize); 
	
	//printing the answer array
	for(i=0;i<returnSize;i++)
	{
		printf("%d ",*(ans+i));
	}
	free(ans);
}
