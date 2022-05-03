#include<iostream>
using namespace std;

class Node{
 public:
 int data;
 Node *next;
};


void print(Node *head)
{
  while(head->next!=NULL)
  {   head=head->next;
      cout<<head->data<<endl;
  }
}

Node* duplicate(Node *head)
{    if (head == NULL) return NULL;

  Node *new_head=new Node();
    new_head->data=head->data;
    new_head->next=duplicate(head->next);

  return new_head;
}

int main()
{
    Node *head=new Node();
    Node *first=new Node();
    Node *second=new Node();   
    Node *third=new Node();
    Node *fourth=new Node();
    Node *fifth=new Node();
    
    head->next=first;

    first->data=1;
    first->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=fifth;

    fifth->data=5;
    fifth->next=NULL;

 
    Node *all=new Node();
    all=duplicate(head);
    print(all);

    return 0;
}