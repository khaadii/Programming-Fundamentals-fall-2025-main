#include<stdio.h>
int isPerfectSquare(int num) {
    long int i;
    for(i=0;i<=num;i++)
    {
        if(i*i==num)
        return 1;
    }
    return 0;
    
}
int main()
{
	int num;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	int a=isPerfectSquare(num);
	if(a==1)
	printf("\nTrue");
	else
	printf("\nFalse");
	
} //now finalized.. fullyyyyyyyyyyyyyyyyyy

