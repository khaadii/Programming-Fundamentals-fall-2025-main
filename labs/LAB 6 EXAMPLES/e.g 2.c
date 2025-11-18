#include<stdio.h>
#include<math.h>
int main()
{
	int num,count=1;
	printf("\nEnter a number:  ");
	scanf("%d",&num);
	num=abs(num);
	if(num==0)
{
	printf("\nNo of digits= 1");
	return 0;
}
	while(num>=10)
	{
		num=num/10;
		count++;
	}
	printf("\nNo of digits= %d",count);	
}




