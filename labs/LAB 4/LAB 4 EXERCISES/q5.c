#include<stdio.h>
int main()
{
	int num,lastdigit,restdigits;
	printf("\nEnter a number:  ");
	scanf("%d",&num);
	while(num)
	{
		lastdigit=num%10;
		restdigits=num/10;
		if(!restdigits)
		break;
		num=restdigits-(lastdigit*2);
	}
	if(num==0||num==7||num==-7)
	printf("\nThe inputted number is divisible by 7");
	else 
	printf("\nThe inputted number is not divisible by 7");
}
-
