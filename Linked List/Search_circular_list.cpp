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

void find(Node *head,int a)
{
    Node *ptr=head;
    int count=0;
    while(head->next!=ptr)
    {        
        head=head->next;
        if(head->data==a)
        {
            cout<<"True";
            count++;
        }
    }
    if(count==0)
    {
cout<<"false";
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


    int a;
    cin>>a;
    print(head);
    find(head,a);
    return 0;
}