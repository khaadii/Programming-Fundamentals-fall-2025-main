#include<stdio.h>
int main()
{
	int i,j,k,size=5,l,ll=6,m;
	for(i=1;i<=size;i+=2)
	{
		for(j=1;j<=(size-i)/2;j++)
		printf(" ");
		for(k=1;k<=i;k++)
		if(k==1 || k==i)
		printf("*");
		else 
		printf(" ");
		
		printf("\n");
	}
	for(l=1;l<=ll;l++)
			{
			for(m=1;m<=(((size+1)/2)-1);m++)
			printf(" ");
			printf("*\n");
}
}
