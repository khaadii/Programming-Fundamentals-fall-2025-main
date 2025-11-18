//Write the program that calculate the volume by using following formula
//V = a 2 * 1 /3 h,
//by creating two separate functions. One of the functions with prototype “getData(int h, int a)”,
//takes two inputs from user. The other function with prototype “volumeCal( )” calculates the
//volume, and this function must be called from the first function “getData ( )”. The first function
//must be called from the main function.
#include<stdio.h>
void volumeCal(int h,int a);
void getdata(void);
int main()
{
getdata();	
}
void volumeCal(int h,int a)
{
	float v=(a*a)*(1/3.0)*h;
	printf("%.2f",v);
	
}
void getdata(void)
{
	int a,h;
	printf("\nEnter the base:  ");
	scanf("%d",&a);
	printf("\nEnter the height:  ");
	scanf("%d",&h);
	volumeCal(h,a);
}
