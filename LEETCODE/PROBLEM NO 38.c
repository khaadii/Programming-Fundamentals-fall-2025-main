int sum(int num1, int num2) 
{
 	return num1+num2;   
}
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\nEnter 2 numbers:  ");
	scanf("%d %d",&num1,&num2);
	int ans=sum(num1,num2);
	printf("\nAnswer:  %d",ans);
	return 0;
}
