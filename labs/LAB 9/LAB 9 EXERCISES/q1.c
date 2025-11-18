//1. Write a function that prints all the unique values from an array and the number of times each
//value occurred. The main function takes a size of array as input and generates a random integer
//array with name “array1”. Random number limit must be between 0 and 10. The ‘main’ function
//calls a function with the name as “CountFrequency( )” that will find the occurrence of each value
//in array.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Countfrequency(int size,int *array1);
int main()
{
	
	int size,i;
	srand(time(0));
	printf("\nEnter the size of the array:  ");
	scanf("%d",&size);
	int array1[size];
	for(i=0;i<size;i++)
	{
		array1[i]=rand()%11;
	}
	//printing the random array
		for(i=0;i<size;i++)
	{
		printf("%d ",array1[i]);
	}
	//array k unique elements and its frequency
	Countfrequency(size,array1);
}
void Countfrequency(int size, int*array1)
{
	int i,j;
	int freq[11]={0};
	for(i=0;i<size;i++)
	{
		freq[*(array1+i)]++;

	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(i!=j)
			{
				if(*(array1+i)==*(array1+j))
				*(array1+j)=100;
			}
		}
		if(*(array1+i)!=100)
		printf("\n%d: Frequency:  %d",*(array1+i),freq[*(array1+i)]);

	}
}



