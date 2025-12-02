#include<stdio.h>
bool isPerfectSquare(int num) {
    int i;
    for(i=1;i<=num;i++)
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
	
}
