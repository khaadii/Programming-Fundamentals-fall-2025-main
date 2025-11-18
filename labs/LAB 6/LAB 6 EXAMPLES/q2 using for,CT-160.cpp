#include<stdio.h>
int main()
{
	int num,ans=1,i;
	printf("\nEnter a number:  ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		ans=ans*i;
	}
	printf("\nThe factorial of %d is %d",num,ans);

}
