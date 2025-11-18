#include<stdio.h>
int main()
{
	int count=0,i;
	char str[20]="Hello world";
	for(i=0;i<12;i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i'  ||  str[i]=='o'  || str[i]=='u' )
		count++;
	}
	printf("\nThe number of vowels in the string is : %d",count);
		
}
