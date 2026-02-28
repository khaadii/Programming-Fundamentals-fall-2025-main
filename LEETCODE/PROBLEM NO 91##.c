int checkIfPangram(char* sentence) {
    int arr[26],i,j;
    
    
    
    for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='a')
    	arr[0]=1; 
	}	
	
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='b')
    	arr[1]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='c')
    	arr[2]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='d')
    	arr[3]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='e')
    	arr[4]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='f')
    	arr[5]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='g')
    	arr[6]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='h')
    	arr[7]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='i')
    	arr[8]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='j')
    	arr[9]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='k')
    	arr[10]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='l')
    	arr[11]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='m')
    	arr[12]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='n')
    	arr[13]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='o')
    	arr[14]=1; 
	}
    
    
    for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='p')
    	arr[15]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='q')
    	arr[16]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='r')
    	arr[17]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='s')
    	arr[18]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='t')
    	arr[19]=1; 
	}
	
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='u')
    	arr[20]=1; 
	}
	
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='v')
    	arr[21]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='w')
    	arr[22]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='x')
    	arr[23]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='y')
    	arr[24]=1; 
	}
	
	for(j=0;sentence[j]!='\0';j++)
    {
    	if(sentence[j]=='z')
    	arr[25]=1; 
	}
	
	

	for(i=0;i<26;i++)
	{
		if(arr[i]!=1)
		return 0;
	}
	return 1;
}
#include<stdio.h>
int main()
{
	char sentence[1001];
	printf("\nEnter the string:  ");
	scanf("%s",sentence);
	int ans=checkIfPangram(sentence);
	printf("\nResult:  %d",ans);
	return 0;
}
