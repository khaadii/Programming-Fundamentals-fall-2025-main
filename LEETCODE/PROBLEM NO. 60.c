int isSameAfterReversals(int num) {
    int temp=num,last,rever1=0;
    while(temp!=0)
    {
    	last=temp%10;
    	rever1=rever1*10+last;
    	temp/=10;
	}
	printf("Reverseal 1:  %d",rever1);
	int rever2=0;
	temp=rever1;
	while(temp!=0)
	{
		last=temp%10;
    	rever2=rever2*10+last;
    	temp/=10;
	}
	printf("Reversal 2:  %d",rever2);
	if(num==rever2)
	return 1;
	else
	return 0;
}
#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter num:  ");
	scanf("%d",&num);
	int ans=isSameAfterReversals(num);
	printf("\nAns:  %d",ans);
	return 0; 
}
