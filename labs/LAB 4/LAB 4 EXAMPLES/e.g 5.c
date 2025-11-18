#include<stdio.h>
int main()
{
	char op='+';
	int num1=8,num2=7,result=0;
	result=(op=='+')?num1+num2:num1-num2;
	printf("\n%d",result);
	return 0;
	
}
