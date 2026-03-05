#include<string.h>
#include<stdlib.h>
int numOfStrings(char** patterns, int patternsSize, char* word) {
    int count=0,i;
    for(i=0;i<patternsSize;i++)
    {
        if(strstr(word,patterns[i])!=NULL)
        {
            count++;
        }
    }
    return count;
}
#include<stdio.h>
int main()
{
	int patternsSize;
	printf("\nEnter the patternsSize:  ");
	scanf("%d",&patternsSize);
	char** patterns=malloc(patternsSize*sizeof(char *));
	int i,j;
	for(i=0;i<patternsSize;i++)
	{
		patterns[i]=malloc(100*sizeof(char)); 
		fflush(stdin);
		gets(patterns[i]);
		fflush(stdin);	
	}
	char word[100];
	printf("\nEnter the words:  ");
	scanf("%s",word);
	int ans=numOfStrings(patterns,patternsSize,word);
	printf("\nAns:  %d",ans);
	for(i=0;i<patternsSize;i++)
	{
		free(patterns[i]); 	
	}
	free(patterns);
	return 0;
}
