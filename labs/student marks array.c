#include<stdio.h>
int main()
{
	int nost,nosu,i,j;
	printf("\nEnter the no of students:  ");
	scanf("%d",&nost);
	printf("\nEnter the no of subjects:  ");
	scanf("%d",&nosu);
	int marks[nost][nosu];
	for(i=0;i<nost;i++)
	{
		printf("Student no. %d\n",i+1);
		for(j=0;j<nosu;j++)
		scanf("%d",&marks[i][j]);
		printf("\n");
	}
	printf("Now to access,Enter the student number: ");
	scanf("%d",&i);
	printf("\nEnter the subject number:  ");
	scanf("%d",&j);
	printf("\nThe marks of Student no %d in Subject no. %d is %d",i,j,marks[i-1][j-1]);
	}
