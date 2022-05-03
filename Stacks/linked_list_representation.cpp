#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int data;
    Stack *next;
};

void push(Stack *head, int x)
{
    Stack *node = new Stack();
    Stack *ptr = head->next;
    head->next = node;
    node->data = x;
    node->next = ptr;
}

void pop(Stack *head)
{
    Stack *ptr = head->next;
    Stack *ptr1 = ptr->next;
    head->next = ptr1;
}

int peak(Stack *head)
{
    head = head->next;

    return head->data;
}

bool isEmpty(Stack *head)
{
    if(head->next==NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void print_from_top(Stack *head)
{
    while (head->next != NULL)
    {
        head = head->next;
        cout << head->data << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    Stack *head = new Stack();
    head->next = NULL;
    push(head, 1);
    push(head, 2);
    push(head, 13);
    push(head, 14);
    pop(head);
    cout << peak(head);
    print_from_top(head);
    return 0;
}