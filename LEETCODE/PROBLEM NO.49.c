/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<stdlib.h>
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int i,j,count=0,flag=0,k,flag2=0;
    
    int* ans=(int *)malloc(1000*sizeof(int));
    for(i=0;i<nums1Size;i++)
    {
    	for(j=0;j<nums2Size;j++)
    	{
    		flag2=0;
    		if(nums1[i]==nums2[j])
    		{
    			flag=0;
    		for(k=0;k<count;k++)
    		{
    			if(ans[k]==nums1[i])
    			{
    			flag=1;
    			break;
				}
			}
			if(flag!=1)
    		{
    		ans[count]=nums1[i];
    		count++;
    		break;
			}
    		flag2=1;
			}
		if(flag2==1)
		break;
		}
	}
	*returnSize=count;

	return ans;
}
#include<stdio.h>
int main()
{
	int i;
	int nums1Size,nums2Size;
	printf("\nEnter the size of nums1:  ");
	scanf("%d",&nums1Size);
	printf("\nEnter the size of nums2:  ");
	scanf("%d",&nums2Size);
	
	//inputting nums1
	int nums1[nums1Size];
	printf("\nEnter the nums1:  ");
	for(i=0;i<nums1Size;i++)
	{
		scanf("%d",&nums1[i]);
	}
	
	//inputting nums2
	int nums2[nums2Size];
	printf("\nEnter the nums2:  ");
	for(i=0;i<nums2Size;i++)
	{
		scanf("%d",&nums2[i]);
	}
	
	int returnSize;
	int *ans=intersection(nums1,nums1Size,nums2,nums2Size,&returnSize);
	for(i=0;i<returnSize;i++)
	{
		printf("%d",*(ans+i));
	}
	free(ans);
	return 0;
}
