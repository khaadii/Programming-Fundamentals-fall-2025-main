#include<stdio.h>
int main()
{
	int depart,sdepart;
	printf("\nSelect your department:\nEnter 1 for CS\nEnter 2 for electrical enginnering:  ");
	scanf("%d",&depart);
	switch(depart)
	{
	
		case 1: {
			
		printf("\nYou have selected CS!\n"); 
		printf("\nChoose your specialization:\nEnter 1 for AI\nEnter 2 for Datascience\nEnter 3 for cyber security\nEnter 4 for gaming and animation:  ");
			scanf("%d",&sdepart); 
		switch(sdepart)
		{
			
			case 1: printf("\nYou have chosen ai "); break;
				case 2: printf("\nYou have chosen ds "); break;
					case 3: printf("\nYou have chosen cyber security"); break;
						case 4: printf("\nYou have chosen gaming and animation "); break;
						  default: printf("\ninvalid input"); break;
		}}
		break;
		case 2: printf("\nyou have selected EE"); break;
		
		default: printf("Invalid input");
	}
	
	}
		


