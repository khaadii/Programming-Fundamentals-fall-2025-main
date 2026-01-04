#include<stdio.h>
#include<math.h>
int sumFourDivisors(int* nums, int numsSize) {
int i,j,k,sum=0,nod=0,temp;

for(i=0;i<numsSize;i++)
{
	nod=0;
	temp=0;
	for(j=1;j<=sqrt(nums[i]);j++)
	{
	
		if(nums[i]%j==0)
		{
			temp+=nums[i]/j;
			nod++;	
			if(nums[i]/j!=j)
			{
			temp+=j;
			nod++;
			}
		}	
	}
	printf("\nnod:  %d and temp:  %d",nod,temp);
	if(nod==4)
	{
		sum+=temp;
	}	
}
return sum;    
}
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
	int ans=sumFourDivisors(nums,numsSize);
	printf("\nFinal answer:  %d",ans);
	return 0;
}

