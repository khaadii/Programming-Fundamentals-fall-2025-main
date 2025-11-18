//Write a program to implement the exchange or swap the values of 3 variables{a,b,c}. To
//implement this, you need to write a function called swaped().
//void swaped(int *aPtr, int *bPtr, int *cPtr);
//such that; b ----> temp
//a ----> b
//c ----> a    
//temp -> a

#include<stdio.h>
void swaped(int *,int *, int *);
int main()
{
int a,b,c;
printf("\nEnter the value of a:  ");
scanf("%d",&a);
printf("\nEnter the value of b:  ");
scanf("%d",&b);
printf("\nEnter the value of c:  ");
scanf("%d",&c);
printf("\na= %d\nb= %d\nc= %d",a,b,c);
swaped(&a,&b,&c);
printf("\nAfter calling the function:!!");
printf("\na= %d\nb= %d\nc= %d",a,b,c);	
}
void swaped(int *aptr,int *bptr, int *cptr)
{
	int temp=*bptr;
	*bptr=*aptr;
	*aptr=*cptr;
	*cptr=temp;
		
}


