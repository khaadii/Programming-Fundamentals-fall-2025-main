/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) 
{
	*returnSize=2;
	int i;
	    double *ans=(double*) malloc(*returnSize*sizeof(double));
	    for(i=0;i<*returnSize;i++)
	    {
	    	if(i==0)
	    	{
	    		*(ans+i)=celsius + 273.15;
			}
			else if(i==1)
			{
				*(ans+i)=celsius * 1.80 + 32.00;
			}
		}
		return ans;
	    
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	double celcius;
	printf("\nEnter the temp in celcius:  ");
	scanf("%lf",&celcius);
	int returnSize;
	double *ans=convertTemperature(celcius,&returnSize);
	for(i=0;i<returnSize;i++)
	{
		printf("%.5lf  ",*(ans+i));	
	}
	free(ans);
}
