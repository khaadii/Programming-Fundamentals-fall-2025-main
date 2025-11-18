#include<stdio.h>
int main(void)
{
	float cost;
	float discount;
	printf("\nEnter the cost of items:  ");
	scanf("%f",&cost);
	if(cost>6000)
	discount=0.5;
	else if(cost>4000)
	discount=0.3;
	else if(cost>=2000)
	discount=0.2;
	else 
	discount=0;
	printf("Oroginal cost=  %.2f\nSaved amount=  %.2f\nAmount after discount=  %.2f",cost,cost*discount,cost-(cost*discount));
}
