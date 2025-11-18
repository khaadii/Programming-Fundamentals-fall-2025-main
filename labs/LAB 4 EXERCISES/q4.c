#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,dis;
	printf("\nEnter the value of a: ");
	scanf("%f",&a);
	if(a==0)
	printf("a can not be zero in a quadratic equation! ");
	else {
	printf("\nEnter the value of b:  ");
	scanf("%f",&b);
	printf("\nEnter the value of c:  ");
	scanf("%f",&c);
	dis=(b*b)-(4*a*c);
	printf("discrimenent:  %.2f",dis);
	if(dis>0)
	printf("\nThe roots are real and unequal! and are: %.2f and %.2f",(-b+sqrt(dis))/(2*a),(-b-sqrt(dis))/(2*a));
	else if(dis==0)
	printf("\nThe roots are real and equal! and are equal to: %.2f",(-b/(2*a)));
	else
	printf("\nThe roots are imaginary and the real part is %.2f and the imaginary part is (%.2f and %.2f)",-b/(2*a),(sqrt(-dis))/(2*a),-(sqrt(-dis))/(2*a));                          
}
	
	
}

