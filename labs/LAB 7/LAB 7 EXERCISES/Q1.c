#include<stdio.h>
int main()
{
	int size,summ=0,sum=0,i;
	float avg;
	printf("\nEnter the size: ");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]>=0)
		summ+=arr[i];
		sum+=arr[i];
		
	}
	avg=sum/(float)size;
	printf("The average is %.2f",avg);
	printf("\nThe sum of positive numbers is:  %d",summ);
	
}
