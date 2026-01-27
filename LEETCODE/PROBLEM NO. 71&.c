int findMin(int* nums, int numsSize) {
 int min=6000,i;
 for(i=0;i<numsSize;i++)
 {
 	if(nums[i]<min)
 	{
 		min=nums[i];	
	}
 }
 return min;
    
}
int  main()
{
	
	int numsSize;
	printf("\nEnter the size of the array:  ");
	scanf("%d",&numsSize);
	int nums[numsSize];
	int i;
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	int ans=findMin(nums,numsSize); 
	printf("ans:  %d",ans);
	return 0;
}
