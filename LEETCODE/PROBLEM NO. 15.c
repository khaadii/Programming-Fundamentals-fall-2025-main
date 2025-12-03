#include<stdio.h>
int isPerfectSquare(int num) {
    long int i;
    for(i=0;i<=num;i++)
    {	if(i*i>num)
    	return i-1;
        if(i*i==num)
        return i;
	}    
}
int main()
{
	int num;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	int a=isPerfectSquare(num);
	printf("\nSqrt of %d is: %d",num,a);
}
