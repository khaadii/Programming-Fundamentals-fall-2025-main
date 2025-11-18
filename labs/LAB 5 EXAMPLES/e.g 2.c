#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter 1 for school of computer science!!");
    printf("\nEnter 2 for school of commerce!!");
    printf("\nEnter 3 for school of engineering!!");
    printf("\nMake your selection!!");
    scanf("%d",&a);
    switch(a)
    {
    	case 1: 
    	printf("\nAvailable departments:  ");
    	printf("\n1->Deaprtment of ai");
    	printf("\n2->Deaprtment of ds");
    	printf("\nMake your choice:  ");
    	scanf("%d",&b);
    	switch(b)
    	{
    		case 1: printf("\nYou chose department of ai"); break;
    		case 2: printf("\nYou chose department of ds"); break;
    		default: printf("\nInvalid choice!!");
		}
		break;
		case 2: 
		printf("\nAvailable departments:  ");
    	printf("\n1->Deaprtment of commerce ");
    	printf("\n2->Deaprtment of purchasing");
    	printf("\nMake your choice:  ");
    	scanf("%d",&b);
    	switch(b)
    	{
    		case 1: printf("\nYou chose department of commerce"); break;
    		case 2: printf("\nYou chose department of purchasing"); break;
    		default: printf("\nInvalid choice!!");
		}
		break;
		case 3:
		printf("\nAvailable departments:  ");
    	printf("\n1->Deaprtment of Mechanical Engineering ");
    	printf("\n2->Deaprtment of Electrical Engineering");
    	printf("\nMake your choice:  ");
    	scanf("%d",&b);
    	switch(b)
    	{
    		case 1: printf("\nYou chose department of ME"); break;
    		case 2: printf("\nYou chose department of EE"); break;
    		default: printf("\nInvalid choice!!");
		}
		break;
		default: printf("\nInvalid choice!!");	
	}
}
