#include<stdio.h>
int main(void)
{
	char ch;
	printf("\nEnter a character:  ");
	scanf("%c",&ch);
	if(ch>='a'&& ch<='z')
	printf("\nSmall alphabet");
	else if(ch>='A'&& ch<='Z')
	printf("\nCapital alphabet");
	else if(ch>='0' && ch<='9')
	printf("\nDigit");
	else
	printf("\nSpecial character");
}
