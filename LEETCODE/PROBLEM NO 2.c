#include<stdio.h>
#include<limits.h>
#include<math.h>
int main()
{
	int divid,divi,i=1,ans;
	printf("\nEnter the dividend:");
	scanf("%d",&divid);
	if((divid<INT_MIN))
	{
		printf("\nDividend is not appropriate");
		return 0;
	}
	printf("\nEnter the divisor:");
	scanf("%d",&divi);
		if(divi>INT_MAX-1 || divi==0)
	{
		printf("\nDivisor is not appropriate");
		return 0;
	}
	if(divid==0)
	{
		printf("answer=%d",0);
	return 0;
	}
	int org_divid=divid;
	int org_divi=divi;
	divid=abs(divid);
	divi=abs(divi);
	ans=divid-divi;
	while(ans>0)
	{
		ans=ans-divi;
		if(ans>=0)
		i++;
	}
	if(org_divid<0 && org_divi>=0)
	printf("answer =%d",0-i);
	else if(org_divi<0 && org_divid>=0)
	printf("answer=%d",0-i);
	else
	printf("answer=%d",i);
}

