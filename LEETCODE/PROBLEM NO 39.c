int smallestEvenMultiple(int n) 
{
	int i=1;
    while(1)
    {
		  if(i%2==0 && i%n==0)
		  {
		  		return i;
				  	
		  } 
		  i++; 	
	}
}
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the n:  ");
	scanf("%d",&n);
	int ans=smallestEvenMultiple(n);
	printf("Ans:  %d",ans);
	return 0;
}
