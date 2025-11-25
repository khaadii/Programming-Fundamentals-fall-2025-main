#include<stdio.h>
int removeDuplicates(int* nums, int numsSize);
int main()
{
	int numsSize,i;
	printf("\nEnter the size of the array: ");
	scanf("%d",&numsSize);
	if(numsSize<1 || numsSize>30000)
	{
		printf("\nSize not valid!!");
		return 0;
	}
	int nums[numsSize];
	printf("\nEnter an array of integers in increasing order :in the range -100 to 100");
	printf("\nWe will show unique elements in increasing order:");
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
		if(nums[i]<-100 && nums[i]>100)
		{
			printf("\narray element out of range!");
			return 0;
		}
	}
//	removeDuplicates(nums,numsSize);
	
	//printing the required array:
	printf("\nThe number of unique elements is: %d\n", removeDuplicates(nums,numsSize));
		for(i=0;i<numsSize;i++)
	{
		printf("%d ",nums[i]);
	}
}
int removeDuplicates(int* nums, int numsSize) 
{
    
    int i,j,k=0,empty[30000]={0};
    
    //finding k
    for(i=0;i<numsSize;i++)
    {
    	char isFound=0;
    	for(j=0;j<k;j++)
    	{
    		if((*(nums+i))==empty[j])
    			{
				isFound=1;
				break;    		
				}
		}
		if(!isFound)
		{
			empty[k++]=(*(nums+i));
		}
	}
    
    //array modifications
    for(i=1;i<numsSize;i++)
    {
    	if(*(nums+i)<=*(nums+(i-1)))
    		{
    			for(j=i+1;j<numsSize;j++)
    			{
    				if(*(nums+j)>*(nums+i) && *(nums+j)>*(nums+(i-1)))
    				{
    					*(nums+i)=*(nums+j);
    					break;
					}
				}
			}
	}	
	
	
	return k;
}
