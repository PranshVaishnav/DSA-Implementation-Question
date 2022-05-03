#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};


void print(Node *head)
{
    Node *ptr=head;
    while(head->next!=ptr)
    {        
        head=head->next;
        cout<<head->data<<endl;
    }
}

int main()
{
    Node *head=new Node();
    Node *first=new Node();
    Node *second=new Node();
    Node *third=new Node();

    
    head->next=first;

    first->data=1;
    first->next=second;
    
    second->data=2;
    second->next=third;

    third->data=3;
    third->next=head;

    print(head);
    return 0;
}