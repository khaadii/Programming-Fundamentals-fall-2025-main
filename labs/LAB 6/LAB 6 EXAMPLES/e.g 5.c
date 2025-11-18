#include<stdio.h>
int main()
{
	int sum=0,a;
	while(1)
	{
		scanf("%d",&a);
		if(a==-999)
		{
			printf("\nBreak statement executed!!");
			break;
		}
		sum+=a;
	}
	printf("\nThe sum is:  %d",sum);
}
