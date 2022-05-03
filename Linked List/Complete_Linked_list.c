#include <stdio.h>
#include <stdlib.h>
#define MIN_INT -32768
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{
    if (p == NULL)
        return;
    printf("%d ", p->data);
    Display(p->next);
}

void Display_reverse(struct Node *p)
{
    if (p == NULL)
        return;
    Display_reverse(p->next);
    printf("%d ", p->data);
}

int count(struct Node *p)
{
    int c = 0;
    while (p != 0)
    {
        c++;
        p = p->next;
    }
    return c;
}

int sum(struct Node *p)
{
    int sum = 0;
    while (p)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int sum_rec(struct Node *p)
{
    static int sum = 0;
    if (!p)
        return sum;
    sum += p->data;
    sum_rec(p->next);
}

int count_rec(struct Node *p)
{
    static int c = 0;
    if (p == NULL)
        return c;

    count_rec(p->next);
    c++;
}

int Max(struct Node *p)
{
    int m = MIN_INT;
    while (p)
    {
        if (p->data > m)
            m = p->data;
        p = p->next;
    }
    return m;
}

int Max_rec(struct Node *p)
{
    int x = 0;
    if (p == 0)
        return MIN_INT;
    x = Max_rec(p->next);
    return x > p->data ? x : p->data;
}

struct Node *Search(struct Node *p, int k)
{
    while (p != NULL)
    {
        if (k == p->data)
            return p;
        p = p->next;
    }
    return NULL;
}

struct Node *Search_rec(struct Node *p, int k)
{
    if (p == NULL)
        return NULL;
    if (k == p->data)
        return p;
    return Search_rec(p->next, k);
}

struct Node *Search_eff(struct Node *p, int k)
{
    struct Node *curr = p;
    struct Node *prev = NULL;
    while (p != NULL)
    {
        if (k == p->data)
        {
            prev->next = p->next;
            p->next = curr;
            first = p;
            return p;
        }
        prev = p;
        p = p->next;
    }
    return NULL;
}

struct Node* last=NULL; 

struct Node *reverse_rec(struct Node *first)
{   
    struct Node* p=first;
    if(first->next==0)
    {
        return first;
    }
    last=first;
    struct Node* q=reverse_rec(first->next);
    q->next=p;
    p->next=NULL;
}

int main()
{
    int A[] = {2, 4, 6, 8};
    create(A, 5);
    Display(first);
    printf("\n");
    Display_reverse(first);
    printf("\n Count Recusively:%d", count_rec(first));
    printf("\n Sum:%d", sum(first));
    printf("\n Sum  recursive:%d", sum_rec(first));
    printf("\n MAx:%d", Max(first));
    printf("\n Max recursive:%d", Max_rec(first));
    printf("\n Search:%d", Search(first, 10));
    printf("\n Search recursive:%u", Search_rec(first, 10));
    struct Node *sol = Search_eff(first, 10);
    printf("\n Search Efficively Move to Head:%u", sol);
    printf("\n");
    Display(sol);
    struct Node *end=reverse_rec(first);
    Display(last);
}