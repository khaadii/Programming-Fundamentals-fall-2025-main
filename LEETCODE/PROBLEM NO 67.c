#include<stdio.h>
//  Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 #include<stdlib.h>
struct ListNode* swapPairs(struct ListNode* head) {
	int i=0;
	struct ListNode* headd=NULL;
	struct ListNode* tail;
	struct ListNode* taill;
    while(head!=NULL)
    {
    	i++;
    	if((i & 1)==1) //odd
    	{
    			struct ListNode* newnode=malloc(sizeof(struct ListNode));
    			if(head->next==NULL)
    			{
    				newnode->val=head->val;	
				}
				else
				{
					newnode->val=head->next->val;	
				}
//    			newnode->val=head->next->val;
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
		}
		else
		{		//even
				struct ListNode* newnode=malloc(sizeof(struct ListNode));
    			newnode->val=taill->val;
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
				
		}
		taill=head;
    	head=head->next;	
	}
	struct ListNode* kf=headd;
//	while(kf!=NULL)
//	{
//		printf("%d ",kf->val);
//		kf=kf->next;
//	}
	return headd;
}
#include<stdio.h>
int main()
{
	int size;
	printf("\nEnter the size of the list:  ");
	scanf("%d",&size);
	int i;
	
	//inputting the list
	struct ListNode* head=NULL;
	struct ListNode* tail;
	for(i=0;i<size;i++)
	{
		struct ListNode* newnode=malloc(sizeof(struct ListNode));
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
	
//	struct ListNode* t=head;
//	printf("\nthe list entered is:  ");
//	while(t!=NULL)
//	{
//		printf("%d ",t->val);
//		t=t->next;
//	}
	
	struct ListNode* ans=swapPairs(head);
	struct ListNode* temp=ans;
	
	//printing the ans list
	while(ans!=NULL)
	{
		printf("%d ",ans->val);
		ans=ans->next;
	}
	struct ListNode* tmp;
	
	//freeing the answer list
	while(temp!=NULL)
	{
		tmp=temp->next;
		free(temp);
		temp=tmp;
	}
	
	//freeing the input list
		while(head!=NULL)
	{
		tmp=head->next;
		free(head);
		head=tmp;
	}
	return 0;
}

