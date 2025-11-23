#include<stdio.h>
#include<string.h>
int getvalue(char ch)
{
switch(ch)
	{
			case 'I': 
			return 1; 
			case 'V':
			return 5; 
			case 'X':
			return 10; 
			case 'L':
			return 50; 
			case 'C':
			return 100; 
			case 'D':
			return 500; 
			case 'M':
			return 1000;
			default:
			return 0; 	
	}	
}
int main()
{
	char roman[15];
	int sum=0,i,current,next;
	//inputting the roman numeral
	scanf("%s",roman);
	for(i=0;roman[i]!='\0';i++)
	{
		if(roman[i]!='M'&&roman[i]!='D'&&roman[i]!='C'&&roman[i]!='L'&&roman[i]!='X'&&roman[i]!='V'&&roman[i]!='I' )
	{
			printf("\nInput not valid(%c)", roman[i]);
		return 0;
	}
	}
	if(strlen(roman)<1 || strlen(roman)>15)
	{
		printf("size invalid");
		return 0;
	}
	for(i=0;roman[i]!='\0';i++)
	{
		current=getvalue(roman[i]);
		next=getvalue(roman[i+1]);
		if(next>current)
		sum-=current;
		else
		sum+=current;	
	}
	if(sum>3999)
	{
		printf("sorry");
		return 0;
	}
	else
	printf("Answer: %d",sum);	
}
