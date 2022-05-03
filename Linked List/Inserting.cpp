#include<iostream>
using namespace std;

class Node{
 public:
 int data;
 Node *next;
};


void insertFront(Node *head,int value)
{
Node *new_head=new Node();
new_head->next=head->next;
head->next=new_head;
new_head->data=value;
}


void insertEnd(Node *head,int value)
{
Node *new_end=new Node();
while(head->next!=NULL)
{
    head=head->next;
}
head->next=new_end;
new_end->data=value;
new_end->next=NULL;
}


void insertAt(Node *head,int value,int pos)
{
    int count=pos-1;
 while(count>0)
 {   head=head->next;
     count--;
 }
 insertFront(head,value);
}



void print(Node *head)
{
  while(head->next!=NULL)
  {   head=head->next;
      cout<<head->data<<endl;
  }
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
    cout<<"Linked List before insertion"<<"\n";
    print(head);
    cout<<"Linked List after insertion in front"<<"\n";
    insertFront(head,-10);
    print(head);
    cout<<"Linked List after insertion in end"<<"\n";
    insertEnd(head,6);
    insertEnd(head,45);
    print(head);
    cout<<"Linked List after insertion in between"<<"\n";
    insertAt(head,90,6);
    print(head);

    return 0;
}