#include<stdio.h>
int main()
{
	float distance,tot_dis=0;
	int i,time;
	printf("\nEnter the time (in hours) between 1 to 5 hours:  ");
	scanf("%f",&time);
	if(!((time>=1 && time<=5)&&(time>=0)))
	{
	printf("\nTime must be between 1 to 5 hours!!");
	return 0;
	}

	for( i=1;i<=time;i++)
	{
	printf("\nEnter the distance in %d-th hour (in miles):  ",i);
	scanf("%f",&distance);
	if(distance<0)
	{
		printf("\nDistance can not negative");
		return 0;
	}
	
	
	tot_dis+=distance;
	
	}
	printf("\nThe average speed of the car is %.2f",tot_dis/time);
	return 0;

}
