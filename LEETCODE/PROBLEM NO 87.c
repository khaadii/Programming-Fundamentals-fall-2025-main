long long sumAndMultiply(int n) 
{
	int temp=n,x=0,sum=0;
	while(temp!=0)
	{
		if(temp%10!=0)
		{
			x=(x*10)+(temp%10);
			
		}
		temp/=10;
	} 
	printf("\nx:  %d",x);
	
	long long x_=0;
	while(x!=0)
	{
			x_=(x_*10)+(x%10);
		x/=10;
	} 
	printf("\nx_:  %d",x_);
	
	temp=n;
	while(temp!=0)
	{
		sum+=(temp%10);
		temp/=10;
	} 
	
	return sum*x_;
	
	   
}
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter a number:  ");
	scanf("%d",&n);
	long long ans=sumAndMultiply(n);
	printf("\nAns:  %d",ans);
}
