#include<stdio.h>
int main()
{
	int first=0,second=1,i=1,s=0;
	printf("1 ");
	while(i<=1000)
	{
		i=first+second;
		if(!(i<=1000))
		break;
		printf("%d ",i);
		if(i%3==0 || i%5==0 ||i%7==0)
		s=s+i;
		first=second;
		second=i;
		
		
		
	}
	printf("\nSUM OF ELEMENTS DIVISIBLE BY 3 5 OR 7 :%d",s);
}
