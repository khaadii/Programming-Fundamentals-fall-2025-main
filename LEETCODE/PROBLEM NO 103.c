#include<stdio.h>
#include<stdlib.h>
int countSeniors(char** details, int detailsSize) {
    int i;
    int x,y;
    int count=0;
    int age;
    for(i=0;i<detailsSize;i++)
    {
        if(details[i][11]=='0')
        x=0;
        if(details[i][11]=='1')
        x=1;
        if(details[i][11]=='2')
        x=2;
        if(details[i][11]=='3')
        x=3;
        if(details[i][11]=='4')
        x=4;
        if(details[i][11]=='5')
        x=5;
        if(details[i][11]=='6')
        x=6;
        if(details[i][11]=='7')
        x=7;
        if(details[i][11]=='8')
        x=8;
        if(details[i][11]=='9')
        x=9;
        
        
        if(details[i][12]=='0')
        y=0;
        if(details[i][12]=='1')
        y=1;
        if(details[i][12]=='2')
        y=2;
        if(details[i][12]=='3')
        y=3;
        if(details[i][12]=='4')
        y=4;
        if(details[i][12]=='5')
        y=5;
        if(details[i][12]=='6')
        y=6;
        if(details[i][12]=='7')
        y=7;
        if(details[i][12]=='8')
        y=8;
        if(details[i][12]=='9')
        y=9;
        
        age=(x*10)+y;
        printf("age:  %d",age);
        if(age>60)
        count++;
    }
    return count;
}

int main()
{
	int detailsSize;
	printf("\nEnyer the detailsSize:  ");
	scanf("%d",&detailsSize);
	int i;
	char **details=malloc(detailsSize*(sizeof(char*)));
	for(i=0;i<detailsSize;i++)
	{
		details[i]=malloc(16*sizeof(char));
		fflush(stdin); 
		gets(details[i]);
		//fflush(stdin);
	}
	
	int ans=countSeniors(details,detailsSize);
	printf("\nAns:  %d",ans);
	for(i=0;i<detailsSize;i++)
	{
		free(details[i]);
	}
	free(details);
}
