#include<stdio.h>
#include<string.h>
int main()
{ 
	char username[6],password[6];
	int i,capital,small,digits;
	printf("\nEnter the user-name of (5 alphabets):  ");
	scanf("%s",&username);
	if((strlen(username)==5))
	{ 
	for(i=0;i<=4;i++)
	{
		if(!((username[i]>=65 && username[i]<=90) || (username[i]>=97 && username[i]<=122)))
		{
		printf("Invalid username!!");
		return 0;
		}
	}

	}
	else
	{
	printf("\nInvalid username!!");
	return 0;
	}
	
	
	printf("\nEnter the password(of 6 characters with at least 1 numeric,1 capital 1 small letter):");
	scanf(" %s",&password);
	if((strlen(password)==6))
	{
		for(i=0;i<=5;i++)
		{

				if((password[i]>='0' && password[i]<='9'))
				digits=1;
				else if((password[i]>=65 && password[i]<=90))
				capital=1;
				else if((password[i]>=97 && password[i]<=122))	
				small=1;	
		
		}
		if((digits && capital && small))
		printf("\nGood!");
		else
		{
		printf("\nValid username but Invalid password!!");
		return 0;
		}
	}
	else 
		{
		printf("\nValid username but Invalid password!!");
		return 0;
		}

}
