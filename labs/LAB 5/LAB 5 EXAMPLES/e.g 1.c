#include<stdio.h>
int main()
{
	int a,num1,num2;
	printf("\nEnter a number:  ");
	scanf("%d",&num1);
	printf("\nEnter another number:  ");
	scanf("%d",&num2);
	printf("\nEnter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division");
	scanf("%d",&a);
	switch(a)
	{
		case 1: printf("\nThe addition of %d and %d is %d",num1,num2,num1+num2); break;
		case 2: printf("\nThe subtraction of %d and %d is %d",num1,num2,num1-num2); break;
		case 3: printf("\nThe multiplication of %d and %d is %d",num1,num2,num1*num2); break;
		case 4: printf("\nThe division of %d and %d is %.2f",num1,num2,((float)num1)/(num2)); break;
		default: printf("\nINVALID CHOICE");
	}
return 0;
}
