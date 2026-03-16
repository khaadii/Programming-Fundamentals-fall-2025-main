int alternateDigitSum(int n) {
    int digno=0,sum=0;
    int rev=0;
    while(n!=0)
    {
        rev=(rev*10)+(n%10);
        n/=10;
    }
    while(rev!=0)
    {
        digno++;
        if(digno%2==0)
        {
            sum+=-(rev%10);
        }
        else
        sum+=rev%10;

        rev/=10;
    }
    return sum;
    
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=alternateDigitSum(n);
	printf("\nAns:  %d",ans);
}
