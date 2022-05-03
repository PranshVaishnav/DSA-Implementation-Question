#include<iostream>
using namespace std;

class Node{
 public:
 int data;
 Node *next;
};

void deleteStart(Node *head)
{ 
 Node *ptr=head->next;
 Node *ptr1=ptr->next;
 head->next=ptr1; 
 free(ptr);
}

void deleteEnd(Node *head)
{
    Node *ptr=head;
    while(head->next!=NULL)
    {   ptr=head;
        head=head->next;
    }
    ptr->next=NULL;
    free(head);
}

void deleteAt(Node *head,int pos)
{
 int count=pos-1;
 while(count>0)
 {   head=head->next;
     count--;
 }
 deleteStart(head);
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
    
    cout<<"Linked list before deletion"<<endl;
    print(head);
    cout<<"Linked list after deletion from start"<<endl; 
    deleteStart(head);
    print(head);
    cout<<"Linked list after deletion from end"<<endl; 
    deleteEnd(head);
    print(head);
    cout<<"Linked list after deletion from between"<<endl; 
    deleteAt(head,3);
    print(head);

    return 0;
}