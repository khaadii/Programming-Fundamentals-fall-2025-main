#include<stdio.h>
#include<math.h>
double myPow(double x, int n) 
{
	return pow(x,n);    
}
int main()
{
	double x; int n;
	printf("\nEnter the base:  ");
	scanf("%lf",&x);
	printf("\nEnter the power:  ");
	scanf("%d",&n);
	double ans=myPow(x,n);
	printf("\nAnswer is:  %lf",ans);
	
	
}
