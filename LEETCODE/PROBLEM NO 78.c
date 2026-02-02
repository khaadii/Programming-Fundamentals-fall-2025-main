int isThree(int n) {
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==3)
    return 1;
    else 
    return 0;
    
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=isThree(n);
	printf("%d",ans);
}
