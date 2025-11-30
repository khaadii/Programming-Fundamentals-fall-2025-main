int isPowerOfThree(int n);
#include<math.h>
#include<stdio.h>
int main()
{
	int n,iPOT;
	printf("\nEnter a number to check wehther it is a power of 3: ");
	scanf("%d",&n);
	iPOT=isPowerOfThree(n);
	if(iPOT==1)
	printf("\nYes, It can be represented in the power of 3:");
	else
	printf("\nNo, It cannot be represented in the power of 3:");
}
int isPowerOfThree(int n) 
{
	if(n<=0)
	return 0;
	
	while(n!=1)
	{
		int checker=n%3;
		if(checker!=0)
		{
			return 0;
		}
		n=n/3;
		if(n!=1)
		{
		if(n%3!=0)
		{
			return 0;
		}
		}
	}
	return 1;
	
    
}
