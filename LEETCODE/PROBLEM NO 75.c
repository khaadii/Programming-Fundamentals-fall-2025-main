#include<stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
	*returnSize=n+1;
    int* ans=malloc((n+1)*sizeof(int)); 
    int i,count=0,j;
    for(i=0;i<=n;i++)
    {
    	count=0;
    	j=i;
    	while(j!=0)
    	{
    		if(j%2)
    		count++;
    		j/=2;
		}
		ans[i]=count;
	}
	return ans;
}
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter n:  ");
	scanf("%d",&n);
	int returnSize;
	int i;
	printf("\nResult:  ");
	int *ans=countBits(n,&returnSize);
	for(i=0;i<returnSize;i++)
	{
		printf("%d ",ans[i]);
	}
	free(ans);
	return 0;
}
