#include<stdio.h>
#include<stdlib.h>
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
  };
struct ListNode* deleteDuplicates(struct ListNode* head) 
{
	struct ListNode* tempp=head;
		struct ListNode* headd=NULL;
		struct ListNode* tail;
	    int count=0,temp[200]={101},flag,i;
	    while(head!=NULL)
	    {
	    	flag=0;
	    	
	    	for(i=0;i<count;i++)
	    	{
	    		if(head->val==temp[i])
	    		{
	    			flag=1;
	    			break;
				}
			}
			if(flag)
			{
			head=head->next;
			continue;	
			}
			
			else
			{
				struct ListNode* newnode= malloc(sizeof(struct ListNode));
				newnode->val=head->val;
				newnode->next=NULL;
				
				if(headd==NULL)
				{
					headd=newnode;
					tail=newnode;	
				}
				else
				{
					tail->next=newnode;
					tail=newnode;
				}
				temp[i]=head->val;
				count++;
			}
			head=head->next;
		}
	    return headd;
}
int main()
{
int n,size,i;
printf("\nEnter the size of the list:  (how many nodes!!?)");
scanf("%d",&size);
struct ListNode* head=NULL;
struct ListNode* tail;
for(i=0;i<size;i++)
{
	struct ListNode* newnode= malloc(sizeof(struct ListNode));
	scanf("%d",&newnode->val);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		tail=newnode;
	}
	else
	{
		tail->next=newnode;
		tail=newnode;
	}	
}

struct ListNode* ans=deleteDuplicates(head);
struct ListNode* temp;
temp=ans;
while(ans!=NULL)
{
	printf("%d ",ans->val);
	ans=ans->next;
} 
while(temp!=NULL)
{
	struct ListNode* zz=temp->next;
	free(temp);
	temp=zz;
} 
while(head!=NULL)
{
	struct ListNode* zz=head->next;
	free(head);
	head=zz;
}
return 0;
}
