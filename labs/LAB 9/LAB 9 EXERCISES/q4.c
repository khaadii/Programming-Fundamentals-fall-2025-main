//Write a program that takes a positive number with a fractional part and rounds it to two decimal
//places. For example, 32.4851 would round to 32.49, and 32.4431 would round to 32.44.
#include<stdio.h>
void func(float nom);
int main()
{
	float num,rem,tem;
	printf("\nEnter a number with fractional part:  ");
	scanf("%f",&num);
	func(num);
}
void func(float nom)
{
	printf("%.2f",nom);
}
