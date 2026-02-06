int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int i,j,count=0;
    for(i=0;i<gridSize;i++)
    {
        for(j=0;j<*gridColSize;j++)
        {
            if(grid[i][j]<0)
            {
                count++;
            }
        }
    }
    return count;
    
}
#include<stdio.h>
int main()
{
	
	int gridSize,a;
	int *gridColSize;
	printf("\nEnter the no. of rows:  ");
	scanf("%d",&gridSize);
	printf("\nEnter the number of columns:  ");
	scanf("%d",&a);
	int** grid=malloc(gridSize*sizeof(int*));
	gridColSize=&a;
	int i,j;
	for(i=0;i<gridSize;i++)
	{
		grid[i]=malloc((*gridColSize)*sizeof(int));
		for(j=0;j<*gridColSize;j++)
		{
			scanf("%d",&grid[i][j]);
		}
	}
	int ans=countNegatives(grid,gridSize,gridColSize);
	printf("\nAns:  %d",ans);
	return 0;
}
