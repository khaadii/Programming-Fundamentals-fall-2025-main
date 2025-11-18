#include<stdio.h> //program to give sum from 1 to 10 without involving 3 and 7 
int main()
{
	int i,sum=0;
	for(i=1;i<=10;i++)
	{
		if(i==3||i==7)
	{
		printf("\nContinue statement executed!!");
		continue;
	}
		sum=sum+i;
		
	}
	printf("%d ",sum);
}
