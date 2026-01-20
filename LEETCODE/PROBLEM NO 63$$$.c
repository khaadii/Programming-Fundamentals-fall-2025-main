int hammingWeight(int n) 
{
	long long int ans=0,rem,dig;
	int count=0;
	while(n!=0)
	{
		rem=n%2;
		//ans=(ans*10)+rem;
		if(rem)
		count++;
		n=n/2;
	}    
	printf("\nvalue of ans:  %d",ans);

	return count;
}
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter n:  ");
	scanf("%d",&n);
	int ans=hammingWeight(n);
	printf("\nFinal ans:  %d",ans);
	return 0;
}
