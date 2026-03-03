int judgeCircle(char* moves) 
{
	int u=0,d=0,l=0,r=0,i;
	for(i=0;moves[i]!='\0';i++)
	{
		if(moves[i]=='U')
		u++;
		else if(moves[i]=='D')
		d++;
		else if(moves[i]=='L')
		l++;
		else if(moves[i]=='R')
		r++;
	} 
	return (u==d && l==r);
	   
}
#include<stdio.h>
int main()
{
	char moves[20000];
	printf("\nEnter the moves:  ");
	scanf("%s",moves);
	int ans=judgeCircle(moves);
	printf("\nAns:  %d",ans);
	return 0; 
}
