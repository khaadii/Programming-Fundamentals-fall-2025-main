#include<stdio.h>
int main()
{
	float salary,taxrate,tax;
	printf("\nEnter your salary:  ");
	scanf("%f",&salary);
	printf("\nEnter the taxrate in %:  ");
	scanf("%f",&taxrate);
	tax=salary*((taxrate)/100);
	printf("\nYour tax is %.2f and the salary you will have after paying tax is %.2f",tax,salary-tax);
	return 0;
	
}
