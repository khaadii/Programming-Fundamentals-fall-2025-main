void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int i,j=0;
 	for(i=m;i<nums1Size;i++)
	{
		nums1[i]=nums2[j++]; 	
	}   
	
	int key;
	//sorting in ascending/non decreasing order--insertion sort
	for(i=1;i<nums1Size;i++)
	{
		key=nums1[i];
		for(j=i-1;key<nums1[j];j--)
		{
			nums1[j+1]=nums1[j];
		}
		nums1[j+1]=key;
	}
}
#include<stdio.h>
int main()
{
	int m,n,i;
	printf("\nEnter the (actual) no of elements in nums1:  ");
	scanf("%d",&m);
	printf("\nEnter the no of elements in nums2:  ");
	scanf("%d",&n);
	int nums1Size=m+n;
	int nums2Size=n;
	int nums1[nums1Size],nums2[nums2Size];
	printf("\nEnter the elements of nums1:  ");
	for(i=0;i<nums1Size;i++)
	{
		scanf("%d",&nums1[i]);
	}
	printf("\nKhadija ...");
	printf("\nEnter the elements of nums2:  ");
	for(i=0;i<nums2Size;i++)
	{
		scanf("%d",&nums2[i]);
	}
	merge(nums1,nums1Size,m,nums2,nums2Size,n);
	for(i=0;i<nums1Size;i++)
	{
		printf("%d ",nums1[i]);
	}
	return 0;
}
