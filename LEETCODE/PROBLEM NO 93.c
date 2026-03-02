#include<stdlib.h>
#include<string.h>
char * interpret(char * command)
{
	int k=0;
	char* ans=malloc((strlen(command)+1)*sizeof(char));
	int i;
	for(i=0;command[i]!='\0';i++)
	{
		if(command[i]=='('  && command[i+1]==')')
		{
		ans[k++]='o';
		i++;
		}
		else if(command[i]!='(' && command[i]!=')')
		ans[k++]=command[i];	
	}
	ans[k]='\0';
	return ans;
}
#include<stdio.h>
int main()
{
	char command[100];
	printf("\nEnter the command:  ");
	scanf("%s",command);
	char* ans=interpret(command);
	printf("\nAns:  %s",ans);
	free(ans);
	return 0;
}
