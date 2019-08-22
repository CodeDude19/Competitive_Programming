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
  int n;
  struct node * temp;
  printf("Enter the data part for node:(-1 for no data )\n");
  scanf("%d",&n);
  if(n==-1) return NULL;
  temp = (struct node *) malloc(sizeof(struct node));
  temp->data = n;
  printf("Enter the data part of left child of node %d:\n",n);
  temp->left = create();
  printf("Enter the data part of right child of node %d:\n",n);
  temp->right = create();
  return temp;
}
// iterativePreorder :
void iterativePreorder(struct node *root)
 {
   struct node *save[100];
   int top = 0;

   if (root == NULL)
   {
     return;
   }

   save[top++] = root;
   while (top != 0)
   {
     root = save[--top];

     printf("%d\t", root->data);

     if (root->right != NULL)
       save[top++] = root->right;
     if (root->left != NULL)
       save[top++] = root->left;
   }
 }
// iterativePostorder:
void iterativePostorder(struct node *root)
 {
   struct
   {
     struct node *node;
     unsigned vleft :1;   // Visited left?
     unsigned vright :1;  // Visited right?
   }save[100];

   int top = 0;

   save[top++].node = root;

   while ( top != 0 )
   {
       /* Move to the left subtree if present and not visited */
       if(root->left != NULL && !save[top].vleft)
       {
           save[top].vleft = 1;
           save[top++].node = root;
           root = root->left;
           continue;
       }

       /* Move to the right subtree if present and not visited */
       if(root->right != NULL && !save[top].vright )
       {
           save[top].vright = 1;
           save[top++].node = root;
           root = root->right;
           continue;
       }

       printf("%d\t ", root->data);

       /* Clean up the stack */
       save[top].vleft = 0;
       save[top].vright = 0;

       /* Move up */
       root = save[--top].node;
    }
 }
 //iterativeInorder
 void iterativeInorder (struct node *root)
 {
   struct node *save[100];
   int top = 0;

   while(root != NULL)
   {
       while (root != NULL)
       {
            if (root->right != NULL)
            {
              save[top++] = root->right;
            }
            save[top++] = root;
            root = root->left;
       }

       root = save[--top];
       while(top != 0 && root->right == NULL)
       {
           printf("%d\t ", root->data);
           root = save[--top];
       }

       printf("%d\t ", root->data);
       root = (top != 0) ? save[--top] : (struct node *) NULL;
   }
 }



int main()
{
    struct node * root;
    root = create();
    printf("In iterativePreorder Traversal:\n");
    iterativePreorder(root);
    printf("\nIn iterativepostorder Traversal:\n");
    iterativePostorder(root);
    printf("\nIn iterativeinorder Traversal:\n");
    iterativeInorder(root);
}
