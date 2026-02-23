
int fib(int n){
if(n==0)
{
    return 0;
}
else if(n==1)
{
    return 1;
}
else
return fib(n-1)+fib(n-2);
}
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter a number:  ");
	scanf("%d",&n);
	int ans=fib(n);
	printf("\nAns:  %d",ans);
}
