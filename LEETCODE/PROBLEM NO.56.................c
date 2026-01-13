#include<math.h>
int checkPerfectNumber(int num) {
    
 int i,sum=0;
 for(i=1;i<sqrt(num);i++)
 {
 	if(num%i==0)
	 {
	 	
		sum+=i; 
		if(num/i!=num)
		{
			sum+=num/i;	
		}	
	}	
 } 
 if(sum==num)
 return 1;
 else
 return 0;  
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("result:  %d",checkPerfectNumber(n));
	return 0;
}
