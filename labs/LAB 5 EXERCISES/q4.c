#include<stdio.h>
int main()
{
	int cost,i,noofsnackstypes,quantity,totalcost=0,burgers=0,frenchfries=0,pizza=0,sandwiches=0,bergerprice,frenchfriesprice,pizzaprice,sandwichprice;
	char snackstype;
	printf("\n\t\t\tABC RESTAURANT ONLINE ORDER PLACEMENT!!");
	printf("\n\t\t\t\tWELCOME!!");
	printf("\nPlease select from the following menu:  ");
	printf("\nB=Burger\nF=French fries\nP=Pizza\nS=Sandwiches");
	printf("\nHow many types of snacks you need to order?  ");
	scanf("%d",&noofsnackstypes);
	for(i=1;i<=noofsnackstypes;i++)
	{
		printf("\nEnter what you want to order:  ");
		scanf(" %c",&snackstype);
		
		switch(snackstype)
	{
		case 'b':
		case 'B':
		{

			cost=200; 
		}
			break;
		case 'f':
		case 'F':
			{

			cost=50;
			
			}
			break;
		case 'p':
		case 'P':
			{

				cost=500;
				
			}
			
			break;
		case 's':
		case 'S':
			{

			cost=150;
				
			}
			
			break;
			default:
				printf("\nInvalid input!!"); 
			
	}
	
		if((!(snackstype!= 'b' && snackstype!='B' && snackstype!='p' && snackstype!='P' && snackstype!='s' && snackstype!='S' && snackstype!='f' && snackstype!='F')))
		{
			printf("\nPlease provide the quantity:  ");
		scanf("%d",&quantity);
		}
		if(snackstype=='b' || snackstype=='B')
		{
			bergerprice=cost*quantity;
		burgers=quantity;
		}
		else if(snackstype=='p'|| snackstype=='P')
		{
			pizza=quantity;
		pizzaprice=cost*quantity;
		
		}
		else if(snackstype=='s' || snackstype=='S')
	{
			sandwichprice=cost*quantity;
		sandwiches=quantity;
	}
		else if(snackstype=='f' || snackstype=='F')
		{
			frenchfriesprice=cost*quantity;
		frenchfriesprice++;
		}
		if(snackstype!= 'b' && snackstype!='B' && snackstype!='p' && snackstype!='P' && snackstype!='s' && snackstype!='S' && snackstype!='f' && snackstype!='F')
		cost=0;
		totalcost=totalcost +(cost*quantity);
	}
	printf("\nYou have ordered!");
	if(burgers!=0)
	printf("\n%d BURGER(s) value: %d PKR",burgers,bergerprice);
	if(frenchfries!=0)
	printf("\n%d FRENCH FRIES value: %d PKR",frenchfries,frenchfriesprice);
	if(pizza!=0)
	printf("\n%d PIZZA(s) value: %d PKR",pizza,pizzaprice);
	if(sandwiches!=0)
	printf("\n%d SANDWICH(es) value: %d PKR ",sandwiches,sandwichprice);
	
	
	printf("\nTotal:  %d PKR",totalcost);
	printf("\nTHANK U FOR YOUR ORDER, HAVE A NICE DAY..");
	return 0;

	
}

