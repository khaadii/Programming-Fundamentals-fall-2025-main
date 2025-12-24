int sumOfMultiples(int n) 
{
  int i,sum=0;
  for(i=1;i<=n;i++)
  {
  		if(i%3==0 || i%5==0 || i%7==0)
		{
			sum+=i;	
		}	
  } 
  return sum; 
}
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the number:  ");
	scanf("%d",&n);
	int ans=sumOfMultiples(n);
	printf("\nSum:  %d",ans);
	return 0;
}
