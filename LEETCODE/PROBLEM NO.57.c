int countConsistentStrings(char * allowed, char ** words, int wordsSize){
int count=0,i,j,k,flag;
for(i=0;i<wordsSize;i++)
{
	for(j=0;words[i][j]!='\0';j++)
	{
		flag=1; //not ok
		for(k=0;allowed[k]!='\0';k++)
		{
			if(words[i][j]==allowed[k])
			{
				flag=0; //ok
				break;
			}
		}
		if(flag)
		break;
	}
	if(!(flag))   //flag!=1/flag==0
	count++;
}
return count;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,i;
	printf("\nEnter the size of the array:  ");
	scanf("%d",&size);
	char allowed[size];
	printf("\nEnter the allowed string:  ");
	scanf("%s",allowed);
	
	int wordsSize;
	printf("\nEnter the number of words:  ");
	scanf("%d",&wordsSize);
	
	char* words[wordsSize];
	for(i=0;i<wordsSize;i++)
	{
		words[i]=(char*) malloc(10*sizeof(char*));
		scanf("%s",words[i]);
	}
	
	int ans=countConsistentStrings(allowed,words,wordsSize);
	printf("Final result:  %d",ans);
	free(words);
	return 0;
}

