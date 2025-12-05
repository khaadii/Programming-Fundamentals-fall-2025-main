//int* plusOne(int* digits, int digitsSize, int* returnSize) {
//    
//}
#include<stdio.h>
int plusOne(int *digits,int digitsSize)
{
	//function starts
	int dig=0,i,nod=0,dig2;
	for(i=0;i<digitsSize;i++)
	{
		dig=(dig*10)+digits[i];
	}
	dig=dig+1;	
	dig2=dig;
	while(dig2!=0)
	{
	    dig2=dig2/10;
	    nod++;
	   
	}
	

	int *ptr=digits;
	
	
	for(i=nod-1;i>=0;i--)
	{
		*(ptr+i)=dig%10;
		dig=dig/10;	
	}
	
	return nod;
}
int main()
{
	int digitsSize,dig=0,i,nod=0,dig2;
	
	printf("\nEnter the digits size:  ");
	scanf("%d",&digitsSize);
	
	int digits[digitsSize];
	for(i=0;i<digitsSize;i++)
	{
		scanf("%d",&digits[i]);
	}
	
	nod=plusOne(digits,digitsSize);
	for(i=0;i<nod;i++)
	{
		printf("%d ",digits[i]);
	}
}

