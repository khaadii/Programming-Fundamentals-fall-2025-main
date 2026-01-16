int countOdds(int low, int high){
	int count=0,i;
	for(i=low;i<=high;i++)
	{
		if(i%2!=0)
		{
			count++;
		}
	}
	return count;
}
#include<stdio.h>
int main()
{
	int low;
	printf("\nEnter low:  ");
	scanf("%d",&low);
	int high;
	printf("\nEnter high:  ");
	scanf("%d",&high);
	int ans=countOdds(low,high);
	printf("Ans:  %d",ans);
	return 0;
}
