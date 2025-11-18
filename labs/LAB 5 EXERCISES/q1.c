#include<stdio.h>
int main()
{
	char option='k';
	while((option!='y') && (option!='Y') && (option!='n') && (option!='N'))
	{
		printf("\nAre you sure you want to delete?  ");
	scanf(" %c",&option);
	switch(option)
	{
		case 'y':
		case 'Y':
			printf("\nDeleted sucessfully!!");
			break;
		case 'n':
		case 'N':
			printf("\nDelete cancelled!!");
			break;
			default:
				printf("\nChoose the right option!!"); 
	}
		
	}
	
	
}
