#include<stdio.h>
void cube(int *ptr);
int main()
{
	int num;
	printf("\nEnter a number:  ");
	scanf("%d",&num);
	cube(&num);
	printf("\nThe cube is:  %d",num);
}
void cube(int *ptr)
{
	*ptr=(*ptr)*(*ptr)*(*ptr);
}

