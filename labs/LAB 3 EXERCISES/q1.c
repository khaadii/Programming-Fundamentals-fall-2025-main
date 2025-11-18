#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter the value of a :  ");
	scanf("%d",&a);
		printf("\nEnter the value of b:  ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nThe value of a is %d and the value of b is %d now",a,b);
	
}
