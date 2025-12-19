int numberOfSteps(int num) 
{
	int ans=0;
	while(num!=0)
	{
			if(num%2==0)
			{
				num=num/2;        
				ans++;		
			}
			else					
			{
			num-=1;               
			ans++;
			}
	}  
	return ans;  
}
#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the number:  ");
	scanf("%d",&num);
	int ans=numberOfSteps(num);
	printf("\nNo of steps:  %d",ans);
}
