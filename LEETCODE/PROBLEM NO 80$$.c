int countDigits(int num) 
{
	int temp=num,count=0;
	int rem;
    while(num!=0)
    {
    	rem=num%10;
    	if(temp%rem==0)
    	{
    		count++;
		}
		num/=10;
	}
	return count;
}
#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the number:  ");
	scanf("%d",&num);
	int ans=countDigits(num);
	printf("\nAns:  %d",ans);
	return 0;
}
