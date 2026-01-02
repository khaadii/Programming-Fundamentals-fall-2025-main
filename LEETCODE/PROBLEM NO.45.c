#include<stdio.h>
#include<stdlib.h>
struct ListNode {
      int val;
      struct ListNode *next;
  };
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{	
	struct ListNode* head=NULL;
	struct ListNode* tail;
	int carry=0;
	while(l1!= NULL || l2!=NULL || carry!=0)
	{
		if(l1!=NULL && l2!=NULL)
		{
			
			struct ListNode* ans=malloc(sizeof(struct ListNode));
		
		if(l1->val+l2->val+carry<=9)
		{
			ans->val=l1->val+l2->val+carry;
			carry=0;
		}
		else
		{
			ans->val=(l1->val+l2->val+carry)%10;
			carry=(l1->val+l2->val+carry)/10;
		}
		
		
		ans->next=NULL;
		l1=l1->next;
		l2=l2->next;
		
		if(head==NULL)
		{
			head=ans;
			tail=ans;
		}
		else
		{
			tail->next=ans;
			tail=ans;
		}		
		}
			else if(l1==NULL && l2==NULL)
		{
			struct ListNode* ans=malloc(sizeof(struct ListNode));
			ans->val=carry;
			ans->next=NULL;
			tail->next=ans;
			//ans=tail;
			carry =0;
		}
		else if(l1==NULL)
		{
			struct ListNode* ans=malloc(sizeof(struct ListNode));
		if(l2->val+carry<=9)
		{
			ans->val=l2->val+carry;
			carry=0;
		}
		else
		{
			ans->val=(l2->val+carry)%10;
			carry=(l2->val+carry)/10;
		}
		
		
		ans->next=NULL;
		
		l2=l2->next;
		
		if(head==NULL)
		{
			head=ans;
			tail=ans;
		}
		else
		{
			tail->next=ans;
			tail=ans;
		}
		}
		else if(l2==NULL)
		{
			struct ListNode* ans=malloc(sizeof(struct ListNode));
		if(l1->val+carry<=9)
		{
			ans->val=l1->val+carry;
			carry=0;
		}
		else
		{
			ans->val=(l1->val+carry)%10;
			carry=(l1->val+carry)/10;
		}
		
		
		ans->next=NULL;
		l1=l1->next;
		
		
		if(head==NULL)
		{
			head=ans;
			tail=ans;
		}
		else
		{
			tail->next=ans;
			tail=ans;
		}
		}
	
		
		
		
	}
	return head;
}
int main()
{
	int sizel1,sizel2;
	printf("\nEnter the no of elements in list1\nOR the no of digits in the number 1: ");
	scanf("%d",&sizel1);
	
	//allocating memory for list1 dynamically
	struct ListNode* head=NULL;
	struct ListNode* tail;
	int i;
	for(i=1;i<=sizel1;i++)
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
	printf("\nEnter the no of elements in list2\nOR the no of digits in the number 2: ");
	scanf("%d",&sizel2);
	//allocating memory for list2 dynamically
	struct ListNode* head2=NULL;
	
	for(i=1;i<=sizel2;i++)
	{
		struct ListNode* newnode= malloc(sizeof(struct ListNode));
		scanf("%d",&newnode->val);
		newnode->next=NULL;
		
		if(head2==NULL)
		{
			head2=newnode;
			tail=newnode;
		}
		else
		{
		tail->next=newnode;	
		tail=newnode;
		}
	}

	struct ListNode* ans=addTwoNumbers(head,head2);
	
	while(ans!=NULL)
	{
		printf("\nFinal answer:  %d",ans->val);
		ans=ans->next;	
	} 
	while(ans!=NULL)
	{
		free(ans);
		ans=ans->next;	
	}	
		while(head!=NULL)
	{
		free(head);
		head=head->next;	
	}
		while(head2!=NULL)
	{
		free(head2);
		head2=head2->next;	
	}
	return 0;
}

