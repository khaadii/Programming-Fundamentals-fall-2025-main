#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\nEnter a number:  ");
	scanf("%d",&num1);
	printf("\nEnter another number:  ");
	scanf("%d",&num2);
	if(num1!=num2)
	{
	printf("\n%d is not equal to %d and ",num1,num2);
	if(num1>num2)
	printf("%d is greater than %d",num1,num2);
	else if(num2>num1)
	printf("%d is greater than %d",num2,num1);	
	}
	
	else 
	printf("\nBoth are equal");
}
