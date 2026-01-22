/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdlib.h>
int* selfDividingNumbers(int left, int right, int* returnSize) {
	
	int i,k=0,flag=0,rem;
	int* ans=(int*) malloc(10000*sizeof(int));
	for(i=left;i<=right;i++)
	{
		int temp=i;
		flag=0;
		while(temp!=0)
		{	
		rem=temp%10;
		temp=temp/10;
		if( rem==0 || i%rem!=0)
		{
			flag=1;
			break;
		}
		}
		if(!(flag)) //flag==0
		{
			 ans[k]=i;
			k++;
		}
	}
	*returnSize=k;
	return ans;
}
#include<stdio.h>
int main()
{
	int left,right,i;
	printf("\nEnter left:  ");
	scanf("%d",&left);
	printf("\nEnter right:  ");
	scanf("%d",&right);
	int returnSize;
	int* ans=selfDividingNumbers(left,right,&returnSize);
	for(i=0;i<returnSize;i++)
	{
		printf("%d ",ans[i]);
	}
	free(ans);
	return 0;
}
