#include<string.h>
int validPalindrome(char* s) {
    int i,j=0;
    char ch[strlen(s)+1];
    for(i=strlen(s)-1;i>=0;i--)
    {
    	ch[j++]=s[i];
	}
	ch[j]='\0';
	printf("\nch: %s",ch);
	if(strcmp(ch,s)==0)
	{
		return 1;
	}
	else
	return 0;
}
#include<stdio.h>
int main()
{
	char s[100001];
	printf("\nEnter a string:");
	scanf("%s",s);
	int ans=validPalindrome(s);
	printf("\nREsult:  %d",ans);	
}
