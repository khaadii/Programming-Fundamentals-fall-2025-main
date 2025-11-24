#include<stdio.h>
#include<string.h>
int main()
{
	int num,div,i,j,left,right;
	printf("\nEnter a number:  ");
	scanf("%d",&num);
	if(num<INT_MIN || num>INT_MAX)
	{
		printf("number is out of range!!");
		return 0;
	}
	char ch[100];
	sprintf(ch,"%d",num);
	for(i=0;i<((strlen(ch))/2);i++)
	{
		sprintf(ch,"%d",num);
		div=1;
		for(j=1;j<strlen(ch);j++)
		{
			div=div*10;
		}
		left=num/div;
		right=num%10;
		if(left!=right)
		{
			printf("not palindrome");
			return 0;
		}
		num=num/10;
		sprintf(ch,"%d",num);
		div=1;
		for(j=1;j<strlen(ch);j++)
		{
			div=div*10;
		}
		num=num%div;
	}
	printf("\npalindrome number");
	return 0;

}

