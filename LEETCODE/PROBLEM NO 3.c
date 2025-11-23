#include<stdio.h>
#include<limits.h>
int main()
{
	int num,rev=0;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	while(num!=0)
	{
		int rem=num%10;
		rev=(rev*10)+rem;
		num/=10;
	}
	if(rev<INT_MIN || rev>INT_MAX)
	{
		printf("out of range!!");
		return 0;
	}
	printf("%d",rev);
	}
