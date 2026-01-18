int commonFactors(int a, int b) 
{
	int i,count=0;
	if(a<b)
	{
		for(i=1;i<=a;i++)
		{
			if(a%i==0 && b%i==0)
			{
				count++;	
			}	
		}	
	}   
	else
	{
			for(i=1;i<=b;i++)
		{
			if(a%i==0 && b%i==0)
			{
				count++;	
			}	
		}	
	} 
	return count;
}
#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter a :  ");
	scanf("%d",&a);
	printf("\nEnter b :  ");
	scanf("%d",&b);
	int ans=commonFactors(a,b);
	printf("Ans:  %d",ans);
	return 0;
}
