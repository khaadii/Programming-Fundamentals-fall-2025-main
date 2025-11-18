#include<stdio.h>
int main()
{
	float time;
	char cofftype,coffsize,prepared;
	printf("\nEnter the type of coffee:\nEnter 'W'for white:\nEnter 'B' for black:");
	scanf("%c",&cofftype);
	printf("\nEnter the coffee size:\nEnter 'd' for double\nEnter 'n' for normal:");
	scanf(" %c",&coffsize);
	printf("\nHow do you want your coffee to be prepared?\nEnter 'M' for manual\nEnter 'A' for machine");
	scanf(" %c",&prepared);
	if(prepared == 'A' || prepared=='a')
	{
	printf("\nThe coffee will be ready automatically.. machine operation");
	return 0;
	}
	else if(prepared=='m' || prepared=='M')
	{
		switch(cofftype)
	{
		case 'b':
		case 'B':
			time=105;
			printf("\nPut water = 20 mins");
			printf("\nSugar = 20 mins");
			printf("\nMix well = 25 mins");
			printf("\nAdd coffee = 15 mins");
			printf("\nMix well = 25 mins");
			if(coffsize=='d' || coffsize=='D')
			{
				time=157.5;
			}
			printf("\nTotal time is:  %.2f",time);
			break;
			case 'w':
			case 'W':
				time=76;
				printf("\nPut water=15 mins");
				printf("\nSugar=15 mins");
				printf("\nMix well=20 mins");
				printf("\nAdd coffee=2 mins");
				printf("\nAdd milk=4 mins");
				printf("\nMix well=20 mins");
				if(coffsize =='d'  || coffsize=='D')
				{
					time=114;
				}
				printf("\nTotal time is:  %.2f",time);
				break;
				default:
					printf("\nInvalid Input!!");
				
				
			
	}
	
		
	}
	
	
}
