#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("\nEnter the principle amount between 100 to 1000000:  ");
	scanf("%f",&p);
	if(!(p>=100 && p<=1000000))
	{
	printf("\nInvalid principle!");
	return 0;
	}
	printf("\nEnter the rate (in %%) from 5 to 10 %:  ");
	scanf("%f",&r);
	if(!(r>=5 && r<=10))
	{
		printf("\nInvalid rate!!");
		return 0;
	}
	printf("\nEnter the time period from 1 to 10 years:  ");
	scanf("%f",&t);
	if(!(t>=1 && t<=10))
	{
		printf("\nInvalid time period!!");
		return 0;
	}
	si=(p*r*t)/100.0;
	printf("\nThe simple interest is %.2f",si);
	}
