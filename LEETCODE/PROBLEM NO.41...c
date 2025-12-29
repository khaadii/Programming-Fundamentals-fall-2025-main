char* toLowerCase(char* s) {
	
	char *ss=(char *)malloc(((strlen(s))+1)*sizeof(char));
    int i;
    for(i=0;s[i]!='\0';i++)
    {
    	
    	ss[i]=tolower(s[i]);
	}
	ss[i]='\0';
	return ss;
}
#include<string.h>
#include<ctype.h>
#include<stdio.h>
int main()
{
	char s[100];
	printf("\nEnter string:  ");
	scanf("%s",s);
	char *ss=toLowerCase(s);
	printf("\n%s",ss);
	free(ss);
}
