//Declare an array of int at least 10 elements long. Fill in the array with the square of its index
//using array syntax, a[i] = i * i ;. Print out the array using pointer syntax *(a + i).
#include<stdio.h>
int main()
{
	int i;
	int arr[10];
	int *ptr=arr;
	for(i=0;i<10;i++)
	{
		arr[i]=i*i;
	}
	for(i=0;i<10;i++)
	{
		
		printf("\nIndex no %d: The value is:  %d ",i,*(ptr+i));
	}
}
