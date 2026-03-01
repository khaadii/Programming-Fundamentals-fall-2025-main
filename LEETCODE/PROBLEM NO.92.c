char findTheDifference(char* s, char* t) {
int i,flag,j;
for(i=0;t[i]!='\0';i++)
{
	flag=1;
	for(j=0;s[j]!='\0';j++)
	{
		if(t[i]==s[j])
		{
				s[j]='A';
				flag=0;
				break;
		}	
	}
	if(flag)
	{
		return t[i];	
	}	
} 
return 'A';   
}
#include<stdio.h>
int main()
{
	char s[1001],t[1002];
	printf("\nEnter the string s:  ");
	scanf("%s",s);
	printf("\nEnter the string t:  ");
	scanf("%s",t);
	char ans=findTheDifference(s,t);
	printf("\nAns:  %c",ans);
	return 0;
}

