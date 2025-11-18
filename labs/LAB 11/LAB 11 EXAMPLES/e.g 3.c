#include<stdio.h>
int main()
{
	int arr[10];
	int *ptr=arr;
	int i;
	
	//using for loop to set the values at each index using pointer notation
	for(i=0;i<10;i++)
	{
		*(ptr+i)=i+1;
	}
	
	//using for loop to print the values at each index using pointer notaion
	for(i=0;i<10;i++)
	{
		printf("\nvalue at index no. %d:  %d",i,*(ptr+i));
	}
	
	//using for loop to print the address of each element 
	for(i=0;i<10;i++)
	{
		printf("\nThe address of element at index no. %d:  %p",i,(ptr+i));	
	}
}
