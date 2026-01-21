int mostWordsFound(char** sentences, int sentencesSize) 
{
	int i,max=0,count,j;
	for(i=0;i<sentencesSize;i++)
	{
		count=1;
		for(j=0;sentences[i][j]!='\0';j++)
		{
			if(sentences[i][j]==' ')
			{
				count++;
				
			}
		}
		if(count>max)
		max=count;
	} 
	return max;   
}
#include<stdio.h>
int main()
{
	int i,sentencesSize;
	printf("\nEnter the number of sentences you will enter:  ");
	scanf("%d",&sentencesSize);
	fflush(stdin);
	char** sentences=(char**) malloc(sentencesSize*sizeof(char*));
	for(i=0;i<sentencesSize;i++)
	{
		sentences[i]=(char*) malloc(100*sizeof(char));
		fgets(sentences[i],100,stdin);
	}
	int ans=mostWordsFound(sentences,sentencesSize);
	printf("\nAns:  %d",ans);
}
