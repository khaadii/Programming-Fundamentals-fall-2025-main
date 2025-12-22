int arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) 
	{
		int count1=0,count2=0,i,j;
//		char woord1[count1+1];
		char* woord1=(char*) malloc((1001)*sizeof(char));
		for(i=0;i<word1Size;i++) //determining the number of characters in the total array1 
		{
			for(j=0;word1[i][j]!='\0';j++)
			{
				woord1[count1]=word1[i][j];
				count1++;
			}
		}
		woord1[count1]='\0';
		printf("\nwoord1:  %s",woord1);
		
		char* woord2=(char*) malloc((1001)*sizeof(char));
		for(i=0;i<word2Size;i++) //determining the number of characters in the total array2
		{
			for(j=0;word2[i][j]!='\0';j++)
			{
				woord2[count2]=word2[i][j];
				count2++;
			}
			
		}
		woord2[count2]='\0';
		printf("\nwoord2:  %s",woord2);
		if(count1!=count2)
		return 0;
		int ans= strcmp(woord1,woord2);
		free(woord1);
		free(woord2);
		return ans;
	}
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int word1Size,word2Size,i;
	printf("\nEnter the size of string 1:  ");
	scanf("%d",&word1Size);
//	char word1[word1Size][1001];
	char **word1=(char **) malloc(word1Size*sizeof(char*));
	printf("\nEnter the first array :  ");
	for(i=0;i<word1Size;i++)
	{
		word1[i]=(char*) malloc(1001*sizeof(char));
		scanf("%s",word1[i]);
	}
	
	
	printf("\nEnter the size of string 2:  ");
	scanf("%d",&word2Size);
//	char word2[word1Size][1001];
	char **word2=(char **) malloc(word2Size*sizeof(char*));
	printf("\nEnter the second array:  ");
	for(i=0;i<word2Size;i++)
	{
		word2[i]=(char*) malloc(1001*sizeof(char));
		scanf("%s",word2[i]);
//	gets(word2[i]);
	}
	int ans=arrayStringsAreEqual(word1,word1Size,word2,word2Size);
	printf("\nResult:  %d",ans);
	if(ans==0)
	{
		printf("\nEqual!");
	}
	else
	printf("\nNot equal");
	return 0;		
}
