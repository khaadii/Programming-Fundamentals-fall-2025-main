#include<stdio.h>
#include<string.h>
int main()
{
	char ch[1000];
	int i;
	printf("\nEnter the string:  ");
	fgets(ch,sizeof(ch),stdin);
	ch[strcspn(ch,"\n")]='\0';
	
	//INPUT VALIDITY
	for(i=0;ch[i]!='\0';i++)
	{
		if((ch[i]!='('&&ch[i]!=')'&&ch[i]!='{'&&ch[i]!='}'&&ch[i]!='['&&ch[i]!=']')|| (strlen(ch)<1|| strlen(ch)>10000))
		{
			printf("\nInvalid input");
			return 0;
		}
	}
	char *ptr,*ptr2;
	//for opening
	//for round braces
	ptr=strchr(ch,'(');
	if(ptr!=NULL)
	{
		ptr2=strchr(ch,')');
		if(ptr2==NULL)
		{
			printf("\nInvalid");
			return 0;
		}
	}
	//for curly braces
	ptr=strchr(ch,'{');
	if(ptr!=NULL)
	{
		ptr2=strchr(ch,'}');
		if(ptr2==NULL)
		{
			printf("\nInvalid");
			return 0;
		}
	}
	
	//for square braces
	ptr=strchr(ch,'[');
	if(ptr!=NULL)
	{
		ptr2=strchr(ch,']');
		if(ptr2==NULL)
		{
			printf("\nInvalid");
			return 0;
		}
	}
	
	//FOR CLOSING 
	//for round braces
	ptr=strchr(ch,')');
	if(ptr!=NULL)
	{
		ptr2=strchr(ch,'(');
		if(ptr2==NULL)
		{
			printf("\nInvalid");
			return 0;
		}
	}
	//for curly 
	ptr=strchr(ch,'}');
	if(ptr!=NULL)
	{
		ptr2=strchr(ch,'{');
		if(ptr2==NULL)
		{
			printf("\nInvalid");
			return 0;
		}
	}
	//for square braces
		ptr=strchr(ch,']');
	if(ptr!=NULL)
	{
		ptr2=strchr(ch,'[');
		if(ptr2==NULL)
		{
			printf("\nInvalid");
			return 0;
		}
	}
	
	//EXPRESSION FORM
	if(strcspn(ch,"(")<strcspn(ch,"[") && strcspn(ch,"[")<strcspn(ch,"{"))
	{
		if(strcspn(ch,")")<strcspn(ch,"]") && strcspn(ch,"]")<strcspn(ch,"}"))
		{
		printf("invalid");
		return 0;
		}
	}
	else if(strcspn(ch,"(")<strcspn(ch,"{") && strcspn(ch,"{")<strcspn(ch,"["))
	{
		if(strcspn(ch,")")<strcspn(ch,"}") && strcspn(ch,"}")<strcspn(ch,"]"))
		{
		printf("invalid");
		return 0;
		}
	} 
	else if(strcspn(ch,"{")<strcspn(ch,"[") && strcspn(ch,"[")<strcspn(ch,"("))
	{
		if(strcspn(ch,"}")<strcspn(ch,"]") && strcspn(ch,"]")<strcspn(ch,")"))
		{
		printf("invalid");
		return 0;
		}
	}
	else if(strcspn(ch,"{")<strcspn(ch,"(") && strcspn(ch,"(")<strcspn(ch,"["))
	{
		if(strcspn(ch,"}")<strcspn(ch,")") && strcspn(ch,")")<strcspn(ch,"]"))
		{
		printf("invalid");
		return 0;
		}
	}
	else if(strcspn(ch,"[")<strcspn(ch,"(") && strcspn(ch,"(")<strcspn(ch,"{"))
	{
		if(strcspn(ch,"]")<strcspn(ch,")") && strcspn(ch,")")<strcspn(ch,"}"))
		{
		printf("invalid");
		return 0;
		}
	}
	else if(strcspn(ch,"[")<strcspn(ch,"{") &&strcspn(ch,"{")<strcspn(ch,"("))
	{
		if(strcspn(ch,"]")<strcspn(ch,"}") && strcspn(ch,"}")<strcspn(ch,")"))
		{
		printf("invalid");
		return 0;
		}
//		else if(((strcspn(ch,"(")<strcspn(ch,")")&&strcspn(ch,")")<strcspn(ch,"{")&&strcspn(ch,"{")<strcspn(ch,"}")&&strcspn(ch,"}")<strcspn(ch,"[")&&<strcspn(ch,"[")<strcspn(ch,"]"))));
//		{
//			printf("\nInvalid ");
//			return 0;
//		}

	}
printf("\nValid !!");		
}
