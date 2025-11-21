#include<stdio.h>
int main()
{
    int size,i,target,j;
    printf("\nEnter the size of the array:  ");
    scanf("%d",&size);
    if(!(size>=2 && size<=10000))
    {
    printf("\nSize is not appropriate!!");
    return 0;
    }
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(!(arr[i]>=-1000000000 && arr[i]<=1000000000))
        {
            printf("\nThis element is not allowed!!");
            return 0;
        }
    }
    printf("\nEnter the target:  ");
    scanf("%d",&target);
    if(!(target>=-1000000000 && target<=1000000000))
    {
        printf("\nTarget is not appropriate!!");
        return 0;
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i!=j)
            {
                if(arr[i]+arr[j]==target)
                {
                    printf("[%d,%d]",i,j);
                    return 0;
                }
            }
        }
    }
}






