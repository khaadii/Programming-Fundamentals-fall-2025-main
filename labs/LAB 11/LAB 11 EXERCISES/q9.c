//9. Write a program that calculates the sum of all the elements in array using pointers.
#include<stdio.h>
int main()
{
	int size,sum=0,i;
	printf("\nEnter the size of the array:  ");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
	}
	int *ptr= arr;
	for(i=0;i<size;i++)
	{
		sum=sum+(*(ptr+i));
	}
	printf("\nSum=  %d",sum);
	
}
