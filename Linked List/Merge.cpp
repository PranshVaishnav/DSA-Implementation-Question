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

void Merge(Node *head,Node *head2)
{
    while(head->next!=NULL)
    {
        head=head->next;
    }
    head->next=head2->next;
}


int main()
{
    Node *head=new Node();
    Node *head2=new Node();

    Node *first=new Node();
    Node *second=new Node();   
    Node *third=new Node();
    Node *fourth=new Node();
    Node *fifth=new Node();
    
    head->next=first;
    head2->next=fourth;
    first->data=1;
    first->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    fourth->data=4;
    fourth->next=fifth;

    fifth->data=5;
    fifth->next=NULL;

    cout<<"linked list 1"<<endl;
    print(head);
    cout<<"linked list 2"<<endl;
    print(head2);
    cout<<"Merged Linked List"<<endl;
    Merge(head,head2);
    print(head);
    return 0;
}