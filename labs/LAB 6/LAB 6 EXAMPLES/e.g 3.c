#include<stdio.h>
int main()
{
	int count=0,num;
	printf("\nEnter a number:  ");
	scanf("%d",&num);
	do
	{
		num=num/10;
		count++;
		
	}
	while(num!=0);
	printf("\nNo of digits=%d",count);
}
