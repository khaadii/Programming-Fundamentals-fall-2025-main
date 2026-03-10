#include<stdio.h>
#include<stdlib.h>
int largestAltitude(int* gain, int gainSize) {
 int* alti=malloc((gainSize+1)*sizeof(int));
    alti[0]=0;
    int i;
    for(i=0;i<gainSize+1;i++)
    {
    	int j=0;
    	alti[i]=0;
    	while(j<i)
    	{
    		alti[i]+=gain[j++];
		}
	}
	int max=alti[0];
	for(i=0;i<gainSize+1;i++)
	{
		if(alti[i]>max)
		max=alti[i];
	}
	printf("\nPrinting the altitude array:  \n");
	for(i=0;i<gainSize+1;i++)
    	{
    		printf("%d ",alti[i]);
		}
		free(alti);
	return max;
	}
	


int main()
{
	int gainSize;
	printf("\nEnter the gainsize:  ");
	scanf("%d",&gainSize);
	int gain[gainSize];
	printf("\nEnter the gain array:  ");
	int i;
	for(i=0;i<gainSize;i++)
	{
		scanf("%d",&gain[i]);
	}
	int ans=largestAltitude(gain,gainSize);
	printf("\nAns:  %d",ans);
}
