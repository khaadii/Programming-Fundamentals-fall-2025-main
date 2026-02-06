int differenceOfSums(int n, int m) {
    int num1=0,num2=0;
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%m!=0)
        {
            num1+=i;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(i%m==0)
        {
            num2+=i;
        }
    }
    return num1 - num2;
    
    
}
#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int ans=differenceOfSums(n,m);
	printf("%d",ans);
}
