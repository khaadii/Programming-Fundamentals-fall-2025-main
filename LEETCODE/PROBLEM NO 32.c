char* longestCommonPrefix(char** strs, int strsSize) 
{
	    int min=201,j,i;

	    for(i=0;i<strsSize;i++)
	    {
	    	if(strlen(*(strs+i))<min)
	    	min=strlen(*(strs+i));
		}
		char* ans= (char*) malloc((min+1)*sizeof(char));
			    if(strsSize==0)
	    {
	    	*(ans+0)='\0';
	    	return ans;
		}

		for(i=0;i<min;i++)
		{
		
			for(j=1;j<strsSize;j++)
			{
			 	if(strs[0][i]!=strs[j][i])
			 	{	
			 		*(ans+i)='\0';
			 		return ans;
				}
			}
			*(ans+i)=strs[0][i];		
		}
		*(ans+(i))='\0';
		return ans;
}
#include<stdio.h>
int main()
{
	int strsSize,i;
	printf("\nHow many strings will you enter:  ");
	scanf("%d",&strsSize);
	
	char** strs= (char** )malloc(strsSize*sizeof(char*));
	
	for(i=0;i<strsSize;i+=1)
	{
		strs[i]=(char*) malloc(200);
		scanf("%s", *(strs+i));
	}
	
	
	char *ptr=longestCommonPrefix(strs,strsSize);
	for(i=0;*(ptr+i)!='\0';i++)
	{
		printf("\nAns:  %c",*(ptr+i));
	}	
	printf("\n(not possible wala)%s",ptr);
	free(ptr);
}


