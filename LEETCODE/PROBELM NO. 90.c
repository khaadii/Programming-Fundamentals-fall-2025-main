#include<string.h>//sorry :) editing just to maintain the streak(to avoid the miss of greenry) once again!!
char * defangIPaddr(char * address)
{
	int i,k=0;
	char *ans=malloc((strlen(address)+7)*sizeof(char));
	for(i=0;address[i]!='\0';i++)
	{
		if(address[i]=='.')
		{
			ans[k++]='[';
			ans[k++]='.';
			ans[k++]=']';
		}
		else
		{
			ans[k++]=address[i];
		}
	}
    ans[k]='\0';
	return ans;
}
#include<stdio.h>
int main()
{
	char address[15];
	printf("\nEnter the address:  ");
	scanf("%s",address);
	char* ans=defangIPaddr(address);
	printf("\nResult:  %s",ans);
	return 0;
}
