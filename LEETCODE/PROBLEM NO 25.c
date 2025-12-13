int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) 
{
 	int maxwealth=0,i,j,sum;
	for(i=0;i<accountsSize;i++)
	{
		sum=0;
		for(j=0;j<*(accountsColSize+i);j++)
		{
			sum+=accounts[i][j];
		}
		if(sum>maxwealth)
		maxwealth=sum;
	} 
	return maxwealth;  
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **accounts;
	int accountsSize,i,j;
	printf("\nEnter the number of customers:  ");
	scanf("%d",&accountsSize);
	accounts=(int**) malloc ((accountsSize)*(sizeof(int*)));
	int accountsColSize[accountsSize];
	for(i=0;i<accountsSize;i++)
	{
		printf("\nFor customer %d:\n",i+1);
		printf("\nEnter the number of accounts:  ");
		scanf("%d",&accountsColSize[i]);
		accounts[i]= (int*) malloc(accountsColSize[i] *sizeof(int));
		
		for(j=0;j<accountsColSize[i];j++)
		{
			printf("\nEnter the wealth in account %d:  ",j+1);
			scanf("%d",&accounts[i][j]);	
		}
	}
	int ans=maximumWealth(accounts,accountsSize,accountsColSize);
	printf("\nThe wealth of the richest is:  %d",ans);
	free(accounts);

}
