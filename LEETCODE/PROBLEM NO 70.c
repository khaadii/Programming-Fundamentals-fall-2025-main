int findDelayedArrivalTime(int arrivalTime, int delayedTime) 
{
	if((arrivalTime+delayedTime)<24)
	return  arrivalTime+delayedTime;
	else
	{
		return (arrivalTime+delayedTime)-24;
	}   
}
#include<stdio.h>
int main()
{
	int arrivalTime,delayedTime;
	printf("\nEnter the arrival time:  ");
	scanf("%d",&arrivalTime);
	printf("\nEnter the delayed time:  ");
	scanf("%d",&delayedTime);
	int ans=findDelayedArrivalTime(arrivalTime,delayedTime);
	printf("\nAns:  %d",ans);
	return 0;
}
