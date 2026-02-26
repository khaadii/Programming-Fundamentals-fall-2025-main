int lengthOfLastWord(char* s) 
{
	int i,j,len=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ')
		len++;	
		else
		for(j=i+1;s[j]!='\0';j++)
		{
			if(s[j]!=' ')
			{
				len=0;
			}
		}
	} 
	return len;   
}
#include<stdio.h>
int main()
{
	char s[10000];
	printf("\nEnter the string:  ");
	gets(s);
	int ans=lengthOfLastWord(s);
	printf("\nResult:  %d",ans); 
}
