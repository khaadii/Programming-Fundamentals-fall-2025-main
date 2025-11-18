#include<stdio.h>
#include<string.h>
int main()
{
	char first[100],last[100],space[2]=" ";
	printf("\nEnter the first name:  ");
	scanf("%s",first);
	strcat(first,space);
	printf("\nEnter the last name:  ");
	scanf("%s",last);
	strcat(first,last);
	printf("\nThe full name is: %s",first);
	printf("\nThe number of characters on the full name is: %d",strlen(first));
	
}
