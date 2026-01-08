int addDigits(int num) 
{
	int sum=0;
	int temp=num;
	while(1)
	{
	sum=0;
	while(temp!=0)
	{
		sum+=temp%10;
		temp/=10;	
	}
	if(sum>9)
	temp=sum;
	else
	break;
  	}
  	
	return sum;

}
#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter a number:  ");
	scanf("%d",&num);
	int ans=addDigits(num);
	printf("ans:  %d",ans);
	return 0;
}
