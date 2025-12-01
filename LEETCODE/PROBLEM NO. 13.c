int isPowerOfFour(int n);
#include<math.h>
#include<stdio.h>
int main()
{
	int n,iPOT;
	printf("\nEnter a number to check wehther it is a power of 4: ");
	scanf("%d",&n);
	iPOT=isPowerOfFour(n);
	if(iPOT==1)
	printf("\nYes, It can be represented in the power of 4:");
	else
	printf("\nNo, It cannot be represented in the power of 4:");
}
int isPowerOfFour(int n) 
{
	if(((n%4!=0 && n!=1) || (n<=0)))
	return 0;
	
	while(n!=1)
	{
		n=n/4;
		if(n!=1)
		{
		if(n%4!=0)
		{
			return 0;
		}
		}
	}
	return 1;
	
    
}
