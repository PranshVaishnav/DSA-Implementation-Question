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

int Search(Node *head, int value)
{
    int count=0;
  while(head->next!=NULL)
  {
      count++;
      head=head->next;
      if(head->data==value)
      {
          return count;   
      }
      
  }
  return -1;
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

    first->data=4;
    first->next=second;

    second->data=10;
    second->next=third;

    third->data=42;
    third->next=fourth;

    fourth->data=34;
    fourth->next=fifth;

    fifth->data=50;
    fifth->next=NULL;

    print(head);
   cout<<"Search for the number:";
   int a=34;
   cout<<a<<endl;
   cout<<"Found at position:"<<Search(head,a);
    return 0;
}