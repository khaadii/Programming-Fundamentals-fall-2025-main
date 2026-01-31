char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int i,flag=0,j;
    for(i=0;i<lettersSize;i++)
    {
    	if(letters[i]>target)
    	{
			return letters[i];
		}
	}
	return letters[0]; 
}
#include<stdio.h>
int main()
{
	int lettersSize;
	printf("\nEnter the size of the array:  ");
	scanf("%d",&lettersSize);
	fflush(stdin);
	char letters[lettersSize];
	int i;
	for(i=0;i<lettersSize;i++)
	{
		scanf("%c",&letters[i]);
	}
	fflush(stdin);
	char target;
	printf("\nEnter the target:  ");
	scanf("%c",&target);
	fflush(stdin);
	char ans=nextGreatestLetter(letters,lettersSize,target);
	printf("Result:  %c",ans);
	return 0;
}
