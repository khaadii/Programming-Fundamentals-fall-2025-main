int totalMoney(int n) 
{
	int sum=0,i;
	int a=1;
	int b=1;
	int count=0;
	for(i=1;i<=n;i++)
	{
		sum+=a;	
		a++;
		count++;
		if(count%7==0)
		{
			a=++b;
			
		}
		
	}  
	return sum;
	  
}
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the nth day:  ");
	scanf("%d",&n);
	int ans=totalMoney(n);
	printf("\nAns:  %d",ans);
	return 0;
}
