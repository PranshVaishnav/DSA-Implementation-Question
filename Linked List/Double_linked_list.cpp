#include<iostream>
using namespace std;

class Node{
    public:
 int data;
 Node *next;
 Node *prev;
};

void print(Node *head)
{
  do
  {  
       cout<<head->data<<endl;
       head=head->next;
  }
  while(head!=NULL);

}

//function to insert element in start of linked list
void push(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();
 
    /* 2. put in the data */
    new_node->data = new_data;
 
    /* 3. Make next of new node as head
    and previous as NULL */
    new_node->next = (*head_ref);
    new_node->prev = NULL;
 
    /* 4. change prev of head node to new node */
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
         
    /* 5. move the head to point to the new node */
    (*head_ref) = new_node;
}        
 

int main()
{
    Node* head = NULL;
    push(&head,1);  //1
    push(&head,2);  //2->1
    push(&head,3);  //3->2->1
    push(&head,4);  //4->3->2->1
    push(&head,5);  //5->4->3->2->1

    print(head);
    return 0;
}