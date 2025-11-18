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
		printf("\nYOU HAVE GOT ADMISSION IN OXFORD IN THE IT FIELD");
		else if(nts>=60)
		printf("\nYOU HAVE GOT ADMISSION IN OXFORD IN THE FIELD ELECTRONICS");
		else if(nts>=50)
		printf("\nYOU HAVE GOT ADMISSION IN OXFORD IN THE FIELD TELECOMMUNICATIONS");
		
	}
	else if(nts>=50)
	{
	if(fsc>=60 && fsc<=70 )
	printf("\nYOU HAVE GOT ADMISSION IN MIT IN THE FIELD OF IT");
	else if(fsc>=50)
	printf("\nYOU GAVE GOT ADMISSION IN MIT IN THE FIELD OF CHEMICAL");
	else if(fsc>40)
	printf("\nYOU HAVE GOT ADMISSION IN MIT IN THE FIELD OF COMPUTER");
	
	
	}

}
