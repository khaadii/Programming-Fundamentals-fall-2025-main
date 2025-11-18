#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char first[100],last[100],space[2]=" ";
	printf("\nEnter the first name:  ");
	scanf("%s",first);
	strcat(first,space);
	printf("\nEnter the last name:  ");
	scanf("%s",last);
	strcat(first,last);
	
	for(i=((strlen(first))-1);i>=0;i--)
	{
		printf("%c",first[i]);
	}
	
}
