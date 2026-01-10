#include<stdio.h>
int isPalindrome(int x) 
{
	if(x<0)
	return 0;
   int temp=x;
   long int reverse=0;
   while(temp!=0)
    {
   		reverse=(reverse*10)+temp%10;
   		temp/=10;
   		printf("\nreverse:  %d",reverse);	
	} 
	
	if(reverse==x)
	return 1;
	else
	return 0;
}

int main()
{
	int x;
	printf("\nEnter x:  ");
	scanf("%d",&x);
	int ans=isPalindrome(x);
	printf("\nans:  %d",ans);
	return 0;
}
