#include<stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize) {
int* ans=malloc((encodedSize+1)*sizeof(int));
*returnSize=encodedSize+1;
int i;
ans[0]=first;
for(i=1;i<encodedSize+1;i++)
{
	ans[i]=encoded[i-1]^ans[i-1];	
} 
return ans;   
}
#include<stdio.h>
int main()
{
	int encodedSize;
	printf("\nEnter the encoded size:  ");
	scanf("%d",&encodedSize);
	int encoded[encodedSize];
	printf("\nEnter the encoded array:  ");
	int i;
	for(i=0;i<encodedSize;i++)
	{
		scanf("%d",&encoded[i]);
	}
	int first;
	printf("\nEnter the first element of the hidden array:  ");
	scanf("%d",&first);
	int returnSize;
	int* ans=decode(encoded,encodedSize,first,&returnSize);
	for(i=0;i<returnSize;i++)
	{
		printf("%d ",ans[i]);
	}
	free(ans);
}

