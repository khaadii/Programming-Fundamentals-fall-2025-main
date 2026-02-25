#include<stdio.h>
#include<stdlib.h>
char* restoreString(char* s, int* indices, int indicesSize) 
{
	int i;    
	char* ans=malloc((indicesSize+1)*sizeof(char));
	for(i=0;i<indicesSize;i++)
	{
		ans[indices[i]]=s[i];
	} 
	ans[i]='\0';
	return ans;
}
int main()
{
	int indicesSize;
	printf("\nEnter the indicesSize:  ");
	scanf("%d",&indicesSize);
	int indices[indicesSize];
	char s[indicesSize];
	printf("\nEnter the s:  ");
	scanf("%s",s);
	printf("\nEnter the indices array:  ");
	int i;
	for(i=0;i<indicesSize;i++)
	{
		scanf("%d",&indices[i]);
	}
	char *ans=restoreString(s,indices,indicesSize);
	printf("Final ans:  %s",ans);
	free(ans);
	return 0;
}
