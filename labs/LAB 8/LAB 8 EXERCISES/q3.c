#include<stdio.h>
#include<string.h>
int main()
{
	char st1[100],st2[100];
	int a;
	printf("\nEnter the first string:  ");
	scanf("%s",&st1);
	printf("\nEnter the second string:  ");
	scanf("%s",&st2);
	a=strcmp(st1,st2);
	if(a==0)
	printf("\nThe strings are equal!!");
	else if(a<0)
	printf("\nThe string 1 is lesser than string 2");
	else
	printf("\nThe string 1 is greater than string 2");
	
	
}
