#include<stdio.h>
#include<stdlib.h>
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) 
{
	int total=0,i;
	 struct ListNode* temp=head;
	 while(temp!=NULL)
	 {
	 	total++;
	 	temp=temp->next;
	 }   
	 struct ListNode* headd=NULL;
	 struct ListNode* tail;
	 for(i=1;i<total-n+1;i++)
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
		head=head->next;
	 }
	 head=head->next;
	 for(i=total-n+1;i<=total-1;i++)
	 {
	 	 struct ListNode* newnode= malloc(sizeof(struct ListNode));
	 	 newnode->val=head->val;
	 	 newnode->next=head->next;
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
printf("\nWhich node you want to remove from the end?  ");
scanf("%d",&n);
struct ListNode* ans=removeNthFromEnd(head,n);
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
