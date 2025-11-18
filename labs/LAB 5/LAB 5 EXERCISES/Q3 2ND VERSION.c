#include<stdio.h>
int main()
{
	int fsc,nts;
	printf("\nEnter your FSc marks in %%:  ");
	scanf("%d",&fsc);
	printf("\nEnter your NTS marks in %%:  ");
	scanf("%d",&nts);
	if(fsc>70)
	{
		if(nts>=70)
		printf("\nYOU ARE GETTING ADMISSION IN OXFORD IN THE IT FIELD");
		if(nts>=60)
		printf("\nYOU ARE GETTING  ADMISSION IN OXFORD IN THE FIELD ELECTRONICS");
		if(nts>=50)
		printf("\nYOU ARE GETTING ADMISSION IN OXFORD IN THE FIELD TELECOMMUNICATIONS");
		
	}
	if(nts>=50)
	{
	if(fsc>=60 && fsc<=70 )
	printf("\nYOU ARE GETTING ADMISSION IN MIT IN THE FIELD OF IT");
	if(fsc>=50)
	printf("\nYOU ARE GETTING ADMISSION IN MIT IN THE FIELD OF CHEMICAL");
	if(fsc>40)
	printf("\nYOU ARE GETTING ADMISSION IN MIT IN THE FIELD OF COMPUTER");
	
	
	}
	else 
	printf("\n u did not get admission in any uni in any field!!");

}
