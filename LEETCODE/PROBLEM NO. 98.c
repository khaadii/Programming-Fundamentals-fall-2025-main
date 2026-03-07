int pivotInteger(int n) {
	int sum,sum2,i,j,k;
for(i=0;i<=1000;i++)
{
		sum=0;
		for(j=1;j<=i;j++)
		{
			sum+=j;
		}
		sum2=0;
		for(k=i;k<=n;k++)
		{
			sum2+=k;
		}
		if(sum==sum2)
		{
			return i;
		}
} 
return -1;   
}
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter n:  ");
	scanf("%d",&n);
	int ans=pivotInteger(n);
	printf("\nAns:  %d",ans);
	return 0; 
}
