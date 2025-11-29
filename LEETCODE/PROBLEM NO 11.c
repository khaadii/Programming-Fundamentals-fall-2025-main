int isPowerOfTwo(int n);
#include<math.h>
#include<stdio.h>
int main()
{
	int n,iPOT;
	printf("\nEnter a number to check wehther it is a power of 2: ");
	scanf("%d",&n);
	iPOT=isPowerOfTwo(n);
	if(iPOT==1)
	printf("\nYes, It can be represented in the power of 2:");
	else
	printf("\nNo, It cannot be represented in the power of 2:");
}
int isPowerOfTwo(int n) 
{
	if(((n%2!=0 && n!=1) || (n<=0)))
	return 0;
	
	while(n!=1)
	{
		n=n/2;
		if(n!=1)
		{
		if(n%2!=0)
		{
			return 0;
		}
		}
	}
	return 1;
	
    
}
