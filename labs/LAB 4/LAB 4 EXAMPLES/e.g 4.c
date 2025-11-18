#include<stdio.h>
int main()
{
	int age;
	printf("\nEnter your age:  ");
	scanf("%d",&age);
	(age>=18)? printf("\nYou can vote!!") : printf("\nYou can not vote!!");
}
