int detectCapitalUse(char* word) {
 int i,flag=0;
 for(i=0;word[i]!='\0';i++)
 	{
 		if(!(word[i]>='A' && word[i]<='Z'))
 		{
 			printf("\npehle condition false sare capital nhi hain ");
 			flag=1;		
		}
	} 
	if(flag==0)
	return 1;
	
	flag=0;
	
	
	for(i=0;word[i]!='\0';i++)
 	{
 		if(!(word[i]>='a' && word[i]<='z'))
 		{
 			printf("\ndusri condition false sare small nhi hain ");
 			flag=1;		
		}
	} 
	if(flag==0)
	return 1; 
	
	
	flag=0;
	
	
	if(word[0]>='A' && word[0]<='Z')
	{
		for(i=1;word[i]!='\0';i++)
 		{
 		if(!(word[i]>='a' && word[i]<='z'))
 			{
 			printf("\nteesri condition false pehla capital h lkn baqi  sare small nhi hain ");
 			flag=1;		
			}
		}
	if(flag==0)
	return 1;  	
	}
	
	
	
	return 0;
	 
}
#include<stdio.h>
int main()
{
	char word[101];
	printf("\nEnter the word:  ");
	scanf("%s",word);
	int ans=detectCapitalUse(word);
	printf("\nResult:  %d",ans);
	return 0;
}
