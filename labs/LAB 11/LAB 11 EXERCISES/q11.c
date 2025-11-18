//11. Write a program that implements the SortFunction that takes argument pointer to an array, size
//of the array and the order in which it is going to be sort. Such as, 1 for Asscending order and 2
//for Descending orde. Finally, print this array in Main() to check.
//void SortFunction(int *arr, int *size, int order);
#include<stdio.h>
void SortFunction(int *arr,int size,int order);
int main()
{
	int size,order,i;
	printf("\nEnter the size of the array:  ");
	scanf("%d",&size);
	int arr[size];
	printf("\nEnter the array:  ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the order for sorting: 1 for ascending and 2 for descending order");
	scanf("%d",&order);
	SortFunction(arr, size, order);
	printf("\nSorted array: ");
		for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}

}
void SortFunction(int *arr,int size,int order)
{
		int i,j,temp;
		if(order==1)
		{
		for(i=0;i<size;i++)
		{
			for(j=i+1;j<size;j++)
			{
				if(*(arr+j)<*(arr+i))
				{
				temp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=temp;
				}
			}
		}
	}
	else if(order==2)
	{
			for(i=0;i<size;i++)
		{
			for(j=i+1;j<size;j++)
			{
				if(*(arr+j)>*(arr+i))
				{
				temp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=temp;
				}
			}
		}
	}
	
}
			






