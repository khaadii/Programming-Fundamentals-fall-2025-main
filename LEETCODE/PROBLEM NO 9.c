int removeElement(int* nums, int numsSize, int val);
#include<stdio.h>
int main()
{
	int numsSize,val,i;
	printf("\nEnter the size of the array:");
	scanf("%d",&numsSize);
	int nums[numsSize];
	
	printf("\nEnter the array: ");
	for(int i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	
	printf("\nEnter the value of val:");
	scanf("%d",&val);
	
	int not_val=removeElement(nums,numsSize,val); 
	
	printf("\nThe number of not_val numbers are: %d\n",not_val);
	
	//displaying the required array
	for(i=0;i<numsSize;i++)
	{
		printf("%d ",nums[i]);
	}
}
int removeElement(int* nums, int numsSize, int val) 
{
	int k=0;
	for(int i=0;i<numsSize;i++)
	{
		if(*(nums+i)==val || *(nums+i)==100) 
		{
			for(int j=i+1;j<numsSize;j++)
			{
				if(*(nums+j)!=val && *(nums+j)!=100) 
				{
					*(nums+i)=*(nums+j);
					*(nums+j)=100; //flagging it 
					k++;
					break;		
				}
			}
		}
		else
		k++;
	}
	return k;
}

