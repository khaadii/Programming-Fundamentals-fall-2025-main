#include<stdio.h>
#include<string.h>
int main()
{
	char str[10000];
	int i=0,len=0,length,j; //10^4
	printf("\nEnter a sentence:  ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	//input validity cheking
	if(strlen(str)<1 || strlen(str)>10000 )
	{
		printf("\nSize not valid!!");
		return 0;
	}
	//only letters and spaces
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]<97 || str[i]>122) && (str[i]<65||str[i]>90) && (str[i]!=32))
		{
			printf("\nInvlaid character!!");
			return 0;
		}
	}
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]!=' ')
				len++;
				length=len;
				if(str[i]==' ')
				{
					j=i+1;
					while(str[j]!='\0')
					{
						if(str[j]!=' ')
						{
							len=0;
							break;
						}
						else
						len=length;
						j++;
					}
					
				}
				i++;
	}
	printf("The length of the last word is: %d",len);
}

