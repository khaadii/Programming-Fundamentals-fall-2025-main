#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if((i==1 || i==9) && (j>=3 && j<=5))
			printf("*");
			else if((i==2 || i==8) && (j==2 || j==6))
			printf("*");
			else if((i>=3 && i<=7)&&(j==1 || j==7))
			printf("*");
			else
			printf(" ");
			}
			printf("\n");
	}
	return 0;
}
