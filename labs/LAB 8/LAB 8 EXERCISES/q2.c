#include<stdio.h>
#include<string.h>
int main()
{
	char str[500],maxchar;
	int i,freq[256]={0},max=0;
	
	printf("\nEnter your name and the courses offered in 2021:  ");
	gets(str);
	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!=' ')
		freq[str[i]]++;
	}
	
	for(i=0;i<256;i++)
	{
		if(freq[i]>max)
		{
			max=freq[i];
			maxchar=i;
		}
	}
	printf("\nThe character which is most repeated is: %c\nIt comes %d times!!",maxchar,max);
	
	
}
