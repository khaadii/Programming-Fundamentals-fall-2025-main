
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * mergeAlternately(char * word1, char * word2){

int k=0,z=0;
char *ans=malloc(((strlen(word1)+strlen(word2)+1)*sizeof(char)));
int i;
for(i=0;i<(strlen(word1)+strlen(word2));i++)
{
	if(i%2==0)
	{
		if(word1[k]!='\0')
		{
		ans[i]=word1[k];
		k++;	
		}
		else
		{
		ans[i]=word2[z];
		z++;
		}	
	}
	else
	{
		if(word2[z]!='\0')
		{
			ans[i]=word2[z];
		z++;
		}
		else
		{
			ans[i]=word1[k];
			k++;
		}
	}
	
}
ans[i]='\0';
return ans;
}

int main()
{
	int  size1;
	printf("\nEnter the size of string 1:  ");
	scanf("%d",&size1);
	char word1[size1+1];
	scanf("%s",word1);
	fflush(stdin);
	int size2;
	printf("\nEnter the size of string 2:  ");
	scanf("%d",&size2);
	char word2[size2+1];
	scanf("%s",word2);
	
	char *ans=mergeAlternately(word1,word2);
	printf("\nAnswer:  %s",ans);
	free(ans);
}
