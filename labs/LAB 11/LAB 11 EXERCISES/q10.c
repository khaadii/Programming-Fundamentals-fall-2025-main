//10. Write a program that finds the second highest number in a float type array of 20 elements using
//pointer.
#include<stdio.h>
int main()
{
	float arr[20],max,seclar;
	int i;
	printf("\nEnter 20 numbers:  ");
	for(i=0;i<20;i++)
	{
		scanf("%f",&arr[i]);
	}
max=arr[0];
for(i=0;i<20;i++)
{
	if(arr[i]>max)
	seclar=max;
	max=arr[i];
}
printf("\nmax= %f",max);
printf("\nseclar= %f ",seclar);
}
//float *ptr;
//seclar=-2147483648;
//ptr=&seclar;
//for(i=0;i<20;i++)
//{
//	if(arr[i]!=max)
//	{
//		if(arr[i]>*ptr)
//		*ptr=arr[i];
//	}
//	seclar=*ptr;
//}
//printf("seclar= %.2f",*ptr);	
//}
//

