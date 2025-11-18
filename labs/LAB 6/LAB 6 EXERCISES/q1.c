#include<stdio.h>
int main()
{
	int ans=1,i,num;
	printf("\nEnter a number:  ");
	scanf("%d",&num);
	if(num<0)
	return 0;
	for(i=1;i<=num;i++)
	{
		ans=ans*i;
	}
	printf("\nThe factorial of %d is %d",num,ans);
}
