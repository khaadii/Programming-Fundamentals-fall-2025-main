int checkIfExist(int* arr, int arrSize) 
{
   int i,j;
   for(i=0;i<arrSize;i++)
   {
   	for(j=0;j<arrSize;j++)
   		{
   			if(i!=j)
   			{
   				if(arr[i]==2*arr[j])
				   {
				   	return 1;
					}		
			}
   			
		}
	} 
	return 0;
}
#include<stdio.h>
int main()
{
	int arrSize;
	printf("\nEnter the array size:  ");
	scanf("%d",&arrSize);
	int arr[arrSize];
	int i;
	for(i=0;i<arrSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	int ans=checkIfExist(arr,arrSize);
	printf("\nAns:  %d",ans);
	return 0;
}
