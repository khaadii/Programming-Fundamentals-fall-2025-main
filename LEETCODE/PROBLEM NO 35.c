int finalValueAfterOperations(char** operations, int operationsSize) 
{
	int i,j,x=0;
	char *ans=(char*) malloc(4*(sizeof(char)));
	for(i=0;i<operationsSize;i++)
	{
		for(j=0;operations[i][j]!='\0';j++)
		{
			ans[j]=operations[i][j];	
		}
		ans[j]='\0';
		printf("\n%s",ans);
		printf("\nx value before wali: %d",x);
		if(strcmp(ans,"X++")==0)
		x++;
		else if(strcmp(ans,"X--")==0)
		x--;
		else if(strcmp(ans,"++X")==0)
		++x;
		else 
		x--;
		printf("\nX=%d",x);	
	}
	free(ans);
	return x;
}
#include<stdio.h>
int main()
{
	int operationsSize,i;
	printf("\nEnter the size of the string:  ");
	scanf("%d",&operationsSize);
	char **operations= (char**) malloc(operationsSize*sizeof(char*));
	for(i=0;i<operationsSize;i++)
	{
		operations[i]= (char*) malloc(4*(sizeof(char)));
		scanf("%s",operations[i]);
	}
	int ans=finalValueAfterOperations(operations,operationsSize);
	printf("\nAnswer:  %d",ans);
	free(operations);
	return 0;
}
