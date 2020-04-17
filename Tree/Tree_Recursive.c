#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node * left;
  struct node * right;
};

struct node * create()
{
  struct node * temp;
  int n;
  printf("Enter the data part of node:(-1 for no data)\n");
  scanf("%d",&n);
  if(n==-1)
    return NULL;
  temp = (struct node *) malloc(sizeof(struct node));
  temp->data = n;
  printf("Enter the left child of the node %d:(-1 for no data)\n",n);
  temp->left = create();
  printf("Enter the right child of the node %d:(-1 for no data)\n",n);
  temp->right = create();
  return temp;
}
void preorder(struct node * p)
{
  if(p!=NULL)
  {
    printf("%d\t",p->data);
    preorder(p->left);
    preorder(p->right);
  }
}
void inorder(struct node *p)
{
  if(p!=NULL)
  {
    inorder(p->left);
    printf("%d\t",p->data);
    inorder(p->right);
  }
}
void postorder(struct node *p)
{
  if(p!=NULL)
  {
    postorder(p->left);
    postorder(p->right);
    printf("%d\t",p->data);
  }
}
int main()
{
  struct node * root;
  root = create();
  printf("In preorder Traversal:\n");
  preorder(root);
  printf("\nIn inorder Traversal:\n");
  inorder(root);
  printf("\nIn postorder Traversal:\n");
  postorder(root);
  return 0;

}
