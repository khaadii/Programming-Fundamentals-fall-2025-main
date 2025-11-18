#include<stdio.h>
int main()
{
	int num,_5thdigit,_4thdigit,_3rddigit,_2nddigit,_1stdigit;
		int i,isprime=0,notprime=0;
	printf("\nEnter a five digit number:  ");
	scanf("%d",&num);
	if(!((num>=10000) && (num<=99999)))
	{
		printf("\nNOT A 5 DIGIT NUMBER!!");
		return 0;
	}	
	_5thdigit=num%10;
	_4thdigit=(num/10)%10;
	_3rddigit=(num/100)%10;
	_2nddigit=(num/1000)%10;
	_1stdigit=(num/10000)%10;
	if((_1stdigit+_2nddigit+_3rddigit+_4thdigit+_5thdigit)%2==0)
	{

	

	
		for(i=2;i<num;i++)
		{
			if((num%i==0 && num!=2))
			notprime=1;

		}
			if(notprime || num==0 || num==1 || num<0)
		printf("\nNot prime!!");
		else 

		printf("\nPrime number!!");




	
		
	}
	else 
	{
		if(_1stdigit==_5thdigit && _2nddigit==_4thdigit)
		printf("\nThe given number is a palindrome");
		else
		printf("\nThe given number is not a palindrome");
		
		
	}
	
	
	}
	
	
	
	
