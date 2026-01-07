int subtractProductAndSum(int n) {
    int temp=n;
    int sum=0,pro=1;
    while(temp!=0)
    {
    	pro*=temp%10;
    	temp/=10;
	}
	 while(n!=0)
    {
    	sum+=n%10;
    	n/=10;
	}
	return pro-sum;
	
}
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter a number:  ");
	scanf("%d",&n);
	int ans=subtractProductAndSum(n);
	printf("ans:  %d",ans);
}
