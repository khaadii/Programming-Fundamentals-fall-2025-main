#include<stdio.h>
int main()
{

	int A[2][2],At[2][2],i,j;
	
	//inputting matrix
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&A[i][j]);
		printf("\n");
	}
	
	//setting the values of (A ka transpose matrix)
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			At[i][j]=A[j][i];
		}
	}
	
	//Displaying the transpose
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%d ",At[i][j]);
			printf("\n");
	}
	

	
	
}
