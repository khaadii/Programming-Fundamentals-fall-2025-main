int  canConstruct(char* ransomNote, char* magazine) {
	int i,j;
    for(i=0;ransomNote[i]!='\0';i++)
    {
    	for(j=0;magazine[j]!='\0';j++)
    	{
    		if(ransomNote[i]==magazine[j])
    		{
    			magazine[j]='A';
    			break;
			}
			
		}
		if(magazine[j]=='\0')
		{
			return 0;
		}
		
	}
	return 1;
}
#include<stdio.h>
int main()
{
	int size_R;
	printf("\nEnter the size of ransomware:  ");
	scanf("%d",&size_R);
	fflush(stdin);
	char ransomNote[size_R+1];
	printf("\nEnter the ransomNOte:  ");
	scanf("%s",ransomNote);
	fflush(stdin);
	
	int size_M;
	printf("\nEnter the size of magazine:  ");
	scanf("%d",&size_M);
	fflush(stdin);
	char magazine[size_M+1];
	printf("\nEnter the magazine:  ");
	scanf("%s",magazine);
	fflush(stdin);
	int ans=canConstruct(ransomNote,magazine);
	printf("\nAns:  %d",ans);
	return 0;
}
