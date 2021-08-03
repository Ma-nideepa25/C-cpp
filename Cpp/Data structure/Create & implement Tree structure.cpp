#include <iostream>
#define null 0
using namespace std;

struct Node{
  int data;
  struct Node *left;
  struct Node *right;
};
struct Node *root,*temp;

void create()
{
  temp = (struct Node*)malloc(sizeof(struct Node));
  int n;
  cin>>n;
  temp->data=n;
  temp->left=temp->right= null;
}

void insert(struct Node *t)
{
    if(t->data<temp->data && t->right!= null)
      insert(t->right);
    if(t->data<temp->data && t->right== null)
      t->right=temp;
    if(t->data>temp->data && t->left!=null)
      insert(t->left);
    if(t->data>temp->data && t->left==null)
       t->left=temp;
}

void inorder(struct Node *t)
{
  if(root==null)
  {
    cout<<"No element";
    return;
  }
  else
  {
    if(t->left!=null)
      inorder(t->left);
    cout<<t->data<<" ";
    if(t->right!=null)
      inorder(t->right);
  }
}

void preorder(struct Node *t)
{
  if(root==null)
  {
    cout<<"No element";
    return;
  }
  else
  {
     cout<<t->data<<" ";
    if(t->left!=null)
      preorder(t->left);

    if(t->right!=null)
      preorder(t->right);
  }
}

void postorder(struct Node *t)
{
  if(root==null)
  {
    cout<<"No element";
    return;
  }
  else
  {

    if(t->left!=null)
      postorder(t->left);

    if(t->right!=null)
      postorder(t->right);
    cout<<t->data<<" ";
  }
}


int main()
{
   int n;
  cin>>n;
  while(n--)
  {
    create();
    if(root==null)
      root=temp;
    else
      insert(root);
  }
  inorder(root);
  cout<<endl;
  preorder(root);
  cout<<endl;
  postorder(root);
  cout<<endl;
    return 0;
}
