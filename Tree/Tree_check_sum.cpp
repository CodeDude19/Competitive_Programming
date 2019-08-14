//https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1
#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node* left;
  struct Node* right;
};
struct Node* create(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
int treecheck(struct Node* root,int x,int& count)
{
  if(!root) return 0;
  int sum = root->data + treecheck(root->left,x,count) + treecheck(root->right,x,count);
  if (sum==x) count++;
  return sum;
}
int treecheckutil(struct Node* root,int x)
{
  int count = 0;
  treecheck(root,x,count);
  return count;
}
int main()
{
  struct Node* root;
  root = create(1);
  root->left = create(2);
  root->right = create(3);
  root->left->left = create(9);
  root->left->right = create(-4);
  root->right->left = create(4);
  root->right->right = create(5);
  root->right->left->right = create(7);
  root->right->left->left = create(12);
  root->left->right->left = create(11);
  root->left->left->right = create(-2);
  int x = 7;
  cout<<"Count = "<<treecheckutil(root,x);

  return 0;
}
