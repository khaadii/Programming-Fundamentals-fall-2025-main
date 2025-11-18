//Salesflow is one of leading software house they are starting their recruitment process for three
//different following positions: Associate Developer, Assistant Developer, Trainee Engineer. There
//is a defined criterion for recruitment process: if candidate clears the test with 50 marks, he will
//be selected for the post of trainee engineer; experience is not the required for this post. If
//candidate secures 60 marks with at least one year of experience and 70 marks with at least 2
//years of experience, then he/she will be selected as an assistant and associate developer,
//respectively. Write a function that takes the test marks from user and ask for experience (if the
//entered marks are x >=60). After that, function shows the assigned position.
#include<stdio.h>
void func(void);
int main()
{
func();	
}
void func(void)
{
	int marks,yoe;
	printf("\nEnter the marks:  ");
	scanf("%d",&marks);
	if(marks>=60)
	{
	printf("\nEnter the years of experience:  ");
	scanf("%d",&yoe);		
	}
	if(marks>=70 && yoe>=2)
	printf("\nYou are selected for the position of associate developer!");
	else if(marks>=60 && yoe>=1)
	printf("\nYou are selected for the position of assistant developer!");
	else if(marks>=50)
	printf("\nYou are selected for the position of trainee engineer!");
	else
	printf("\nBetter luck next time!");
}
