Node* Kreverse(Node *head, int ctr,int k)
{
    // Error in perfect pair
    if(ctr == 0) return head;
    if(head == NULL) return NULL;
    int P = k;
    Node* curr = head;
    Node* nxt = curr->next;
    Node* prev =NULL;
    while (k)
    {
        curr->next=prev;
        prev = curr;
        curr = nxt;
        nxt = nxt->next;
        ctr--;
        k--;
    }
    head->next = Kreverse(curr, ctr, P);
    return prev;
}

int main()
{
    Node *head;
    int n;
    int k;
    int ctr=(n/k)*k;
    print(head);
    head=Kreverse(head,ctr,2);
    print(head);
}