#include <iostream>
using namespace std;
 struct Node
   {
     int data;
     struct Node *next;
   };
 struct Node *head = NULL;

void push_front(struct Node **head, int value)
{
  Node *newnode = new Node;
  newnode->data = value;
  newnode->next = *head;
  *head = newnode;
};

int printNthElement(struct Node *head,int n)
{
  int len=0,i;
  Node *temp = head;
  while(temp!=NULL)
  {
    temp=temp->next;
    len++;
  }
  if(len<n)
  {
    return 0;
  }
  temp = head;
  for(i=1;i<len-n+1;i++)

    temp=temp->next;

  cout<<temp->data;
  return 1;
};


int main()
{
  int no_of_elements,temp,i,n;
  cin>>no_of_elements;
  for(i=0;i<no_of_elements;i++)
  {
    cin>>temp;
    push_front(&head,temp);
  }
  cin>>n;
  if(0==printNthElement(head,n))
  {
    cout<<"No node found"<<endl;
  }
    return 0;
}
