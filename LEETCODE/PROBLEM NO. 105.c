int strStr(char* haystack, char* needle) 
{
	int i,p,flag,j;
	for(i=0;haystack[i]!='\0';i++)
	{
		flag=0;
		p=i;
		for(j=0;needle[j]!='\0';j++)
		{
			if(needle[j]!=haystack[i])
			{
				flag=1;
				break;
			}
			i++;
		}
		i=p;
		if(flag==0)
		{
			return i;
		}	
	}
	return -1;
}
#include<stdio.h>
int main()
{
	char haystack[10000], needle[10000];
	printf("\nEnter the haystack!:  ");
	scanf("%s",haystack);
	printf("\nEnter the needle!:  ");
	scanf("%s",needle);
	int ans=strStr(haystack,needle);
	printf("\nAns:  %d",ans); 
	
}
