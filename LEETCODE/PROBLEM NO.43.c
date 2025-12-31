#include<stdio.h>
#include<limits.h>
int reverse(int x){
signed long long int ans=0;
int rem;
while(x!=0)
{
	rem=x%10;
	if((ans*10)>INT_MAX ||(ans*10)<INT_MIN)
	return 0;
	ans=(ans*10)+rem;
	x/=10;
}

return ans;
}
int main()
{
	int x;
	printf("\nEnter a number:  ");
	scanf("%d",&x);
	int ans=reverse(x);
	printf("\nAns:  %d",ans);
	return 0;
}

