#include<stdio.h>
#include<stdlib.h>
struct node {
	int data; struct node *left,*right;
}; struct node *root=NULL;
struct node *bst(struct node *ptr, int n)
{
	if(ptr==NULL)
	{
		ptr=(struct node*)malloc(sizeof(struct node));
		ptr->data=n;
		ptr->right=NULL;
		ptr->left=NULL;
	}
	else if(n>ptr->data)
	ptr->right=bst(ptr->right,n);
	else
		ptr->left=bst(ptr->left,n);
		return ptr;
	}
int height(struct node *ptr)
{
	int lh=0,rh=0;
	if(ptr==NULL)
	return 0;
	else {
		lh=lh+height(ptr->left);
		rh=rh+height(ptr->right);
		return (1+(lh>rh?lh:rh));
	}
}


int main()
{
	int arr[10000];
	int i,h,n;
	printf("number of nodes in bst");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	root = bst(root,arr[i]);
	h=height(root);
	printf("height = %d",h-1);
	return 0;
}
