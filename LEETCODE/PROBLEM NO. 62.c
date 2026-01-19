#include<stdio.h>
 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
int isSameTree(struct TreeNode* p, struct TreeNode* q) 
{
	if(p==NULL && q==NULL)
	{
		return 1;
	}
	if(p==NULL && q!=NULL || p!=NULL && q==NULL)
	{
		return 0;
	}
	if(p->val!=q->val)
	{
		return 0;
	}	
	if(isSameTree(p->left,q->left)==0)
	return 0;
	if(isSameTree(p->right,q->right)==0)
	return 0;
	return 1;
}
#include<stdlib.h>
struct TreeNode* input()
{
	int x;
	printf("\nEnter the value of the node:  ");
	scanf("%d",&x);
	if(x==-1)
	return NULL;
	struct TreeNode* root=malloc(sizeof(struct TreeNode));
	root->val=x;
	root->left=input();
	root->right=input();
	return root;	
}
int main()
{
  struct TreeNode *p=input();
  struct TreeNode *q=input();
  printf("Result:  %d",isSameTree(p,q));
  return 0; 	
}

