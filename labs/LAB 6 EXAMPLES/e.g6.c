#include<stdio.h>
int main()
{
	int num,i,j,k,isprime=0;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num;j++)
		{
			if(i*j==num)
			{
			for(k=2;k<i;k++)
				{
				if(i%k!=0 || i==2)
				isprime++;
				}
				if(isprime==k)
				printf("(%d) ",i);
				isprime=0;
				
			}

			
		}
	}
	
	
}
