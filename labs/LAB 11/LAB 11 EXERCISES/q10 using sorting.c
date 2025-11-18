//10. Write a program that finds the second highest number in a float type array of 20 elements using
//pointer.
#include<stdio.h>
int main()
{
	float	arr[20], *ptr=arr,temp;
	int i,j;
	//inputting the array
	printf("\nEnter 20 numbers:  ");
	for(i=0;i<20;i++)
	{
		scanf("%f",ptr+i);
	}
	
	//sorting them
	for(i=0;i<20;i++)
	{
		for(j=i+1;j<20;j++)
		{
			if(*(ptr+j)<*(ptr+i))
			{
			temp=*(ptr+i);
			*(ptr+i)=*(ptr+j);
			*(ptr+j)=temp;	
			}
		}
	}
	printf("\nThe second largest value is:  %f",*(ptr+18));
}
