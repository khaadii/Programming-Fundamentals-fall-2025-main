#include<math.h>
#include<limits.h>
int divide(int dividend, int divisor) 
{
	if(dividend==INT_MIN && divisor==-1)
		return 
	long long int divi=divisor;
	long long int divid=dividend;
	if(!(dividend))
	return 0;
    long long int sum=0;
	long long int count=0;
	
	long long  int divisorr,dividendd;
	if(divi<0)
	divisorr= -divi;
	else 
	divisorr=divi;
	if(divid<0)
	dividendd=-divid;
	else
	dividendd=divid;
	while(1)
    {
    	sum+=divisorr;
    	count++;
    	if(sum>=dividendd)
    	{
    		if(sum>dividendd)
			count-=1;	
    		break;
		}
	}
	if(count<INT_MIN)
	return INT_MIN;
	else if(count>INT_MAX)
	return INT_MAX;
	else if((dividend<0&&divisor>0) || (dividend>0&&divisor<0))
	return -count;
	else
	return count;
}
#include<stdio.h>
int main()
{
	int dividend,divisor;
	printf("\nEnter the dividend:  ");
	scanf("%d",&dividend);
	
	printf("\nEnter the divisor:  ");
	scanf("%d",&divisor);
	
	int ans=divide(dividend,divisor);
	printf("\nAns:  %d",ans);
	
	return 0;
}
