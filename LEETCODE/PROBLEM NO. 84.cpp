#include<stdio.h>
#include<string.h>
bool isAnagram(char* s, char* t) {
    int i,j,flag=1;
   if((strlen(s))!=(strlen(t)))
   return 0;
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
			if(flag==1)
			{
				return 0;
			}
	}
	return 1;    
}
int main()
{
	char s[50000],t[50000];
	printf("\nEnter s:  ");
	scanf("%s",s);
	printf("\nEnter t:  ");
	scanf("%s",t);
	int ans=isAnagram(s,t);
	printf("\nThe result is:  %d",ans);
	return 0;
}
