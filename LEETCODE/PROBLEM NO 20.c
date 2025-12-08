#include<stdio.h>
int factorial(int num)
{
	int i,ans=1;
	for(i=1;i<=num;i++)
	{
		ans*=i;
	}
	return ans;
}
int climbStairs(int n) 
{
   int ans=1,nof2s=0,nn=0,i,j,k=1,y,z,nof1s=0;
   for(i=1;i<=n/2;i++)
   {
   	int sum=0;
	   nn=0;
	   nof2s=0;nof1s=0;
   	for(j=1;j<=i;j++)
   	{
   		sum+=2;
   		nof2s++;
   		nn++;
   	}
   	
   		for(z=1;z<=n-1-k;z++)
   		{
   			if(sum>n)
   			break;
   			sum+=1;
   			nof1s++;
   			nn++;
		}
		k+=2;
	   ans+=(factorial(nn))/((factorial(nof2s))*(factorial(nof1s)));
   }
   return ans;
}
int main()
{
	int n;
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	int result=climbStairs(n);
	printf("\nAnswer: %d",result);
}


