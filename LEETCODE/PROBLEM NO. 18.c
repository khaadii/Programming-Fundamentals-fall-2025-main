#include<stdio.h>
#include<string.h>
void reverseString(char* s, int sSize) 
{
    int i,k=1;
    char temp;
    int a=sSize;
    for(i=0;i<sSize/2;i++)
    {
    	temp=*(s+i);
    	*(s+i)=*(s+(a-k));
    	*(s+(a-k))=temp;
    	k++;
	}
}
int main()
{
	int sSize,i;
	printf("\nEnter the size of the array:  ");
	scanf("%d",&sSize);
	char s[sSize];
	scanf("%s",&s[i]);
	reverseString(s,sSize);
	printf("\n%s",s);
}
