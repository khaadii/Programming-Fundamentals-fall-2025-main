#include<math.h>
double myPow(double x, int n) 
{
	return pow(x,n);    
}
#include<stdio.h>
int main()
{
	double x;
	printf("\nEnter the base:  ");
	scanf("%lf",&x);
	int n;
	printf("\nEnter the power:  ");
	scanf("%d",&n);
	double ans=myPow(x,n);
	printf("\nAns:  %lf",ans);
	return 0; 
}
