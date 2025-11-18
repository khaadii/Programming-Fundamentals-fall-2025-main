#include<stdio.h>
#include<string.h>
int main()
{
	int marks[5],i,sum=0;
	float avg;
	for(i=0;i<=4;i++)
	{
		printf("\nEnter the marks for the student %d:  ",i+1);
		scanf("%d",&marks[i]);
		sum+=marks[i];
	}
	avg=sum/5.0;
	printf("\nThe sum is: %d",sum);
	printf("\nThe average is: %.2f",avg);
	
	
	
	
	
}
