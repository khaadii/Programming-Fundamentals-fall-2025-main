int numJewelsInStones(char* jewels, char* stones) 
{
	int i,j,ans=0;
       for(i=0;stones[i]!='\0';i++)
       {
       		for(j=0;jewels[j]!='\0';j++)
       		{
       			if(stones[i]==jewels[j])
				  {
					ans++;
				   break;	
				  }	
			}
	   }
	   return ans;
}
#include<stdio.h>
int main()
{
	int size,i;
	printf("\nEnter the size of the jewels!:  ");
	scanf("%d",&size);
	fflush(stdin);
	char jewels[size+1];
	printf("\nEnter the jewels array:  ");
	for(i=0;i<size;i++)
	{
		scanf("%c",&jewels[i]);
	}
	jewels[i]='\0';
	fflush(stdin);
	
	printf("\nEnter the size of the stones!:  ");
	scanf("%d",&size);
	char stones[size+1];
	printf("\nEnter the stones array:  ");
	for(i=0;i<size;i++)
	{
		scanf("%c ",&stones[i]);
	}
	stones[i]='\0';
	int ans=numJewelsInStones(jewels,stones);
	printf("\nAnswer:  %d",ans);
	return 0;
}
