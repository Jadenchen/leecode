#include <stdio.h>
#include <stdlib.h>

struct node {

	int data;
	struct node *left;
	struct node *right;
};


struct node *NewNode (int data)
{
	struct node *new = (struct node *)malloc (sizeof(struct node));
	new->data = data;
	new->left = NULL;
	new->right = NULL;

	return new;
}


void printPostOrder(struct node *root)
{
	if (root == NULL)
		return ;

	printPostOrder(root->left);

	printPostOrder(root->right);

	printf(" %d ", root->data);

}

void printInOrder(struct node *root)
{
	if (root == NULL)
		return ;

	printInOrder(root->left);

	printf(" %d ", root->data);

	printInOrder(root->right);

}

void printPreOrder(struct node *root)
{
	if (root == NULL)
		return ;

	printf(" %d ", root->data);

	printPreOrder(root->left);

	printPreOrder(root->right);
}

int main (void)
{

	struct node *root = NewNode(1);
	root ->left = NewNode(2);
	root ->right = NewNode(3);
	root ->left->left = NewNode(4);
	root ->left->right = NewNode(5);
 
	printf("preorder data\n");
	printPreOrder(root);
	printf("\n");
	printf("inorder data\n");
	printInOrder(root);
	printf("\n");
	printf("post order\n");
	printPostOrder(root);
	printf("\n");

 	return 0;
}


