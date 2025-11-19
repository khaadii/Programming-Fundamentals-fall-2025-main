//In shopping for a new house, you must consider several factors. In this problem the initial cost
//of the house, the estimated annual fuel costs, and the annual tax rate are available. Write a
//program that will determine the total cost of a house after a five-year period and run the
//program for each of the following sets of data.
//
//To calculate the house cost, add the initial cost to the fuel cost for five years, then add the
//taxes for five years. Taxes for one year are computed by multiplying the tax rate by the initial
//cost. Write and call a function that displays instructions to the program user.
#include<stdio.h>
void instructions(void);
int main()
{
	
	float ich,afc,atr,tch;
	instructions();
	scanf("%f",&ich);
	scanf("%f",&afc);
	scanf("%f",&atr);
	tch=ich+(afc*5)+(((atr/100.0)*ich)*5);
	printf("\nThe total cost of a house after a five-year period is: %f",tch);
}
void instructions(void)
{
	printf("\nThis program will determine the total cost of a house after a five-year period!");
	printf("\nYou need to enter the initial cost of the house, the estimated annual fuel costs, and the annual tax rate respectively:");
}
