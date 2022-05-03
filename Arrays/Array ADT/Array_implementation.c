/* Priyanshu Vaishnav */
#include <stdio.h>
#include<stdlib.h>


struct Array{
    int A[10];
    int size;
    int length;
};


void swap(int* x,int* y){
int temp;
temp=*x;
*x=*y;
*y=temp;
}

void Display(struct Array *a)
{
  int i;
  for(i=0;i<a->length;i++)
  {
    printf(" %d ",a->A[i]);
  }
  printf("\n");
}

void Add(struct Array *a,int x){
    a->A[a->length]=x;
    a->length++;
}

void Insert(struct Array *a,int index,int x)
{
    int i;
    for(i=a->length;i>=index;i--)
    {
        a->A[i]=a->A[i-1];
    }
    a->A[index]=x;
    a->length++;
}

void Delete(struct Array *a,int index)
{
    int i;
    for(i=index;i<a->length-1;i++)
    {
        a->A[i]=a->A[i+1];
    }
   
    a->length--;
}

int LinearSearch(struct Array *a,int search)
{
    int i;
    for(i=0;i<a->length;i++)
    {
        if(a->A[i]==search)
        {
            return i;
        }
    }
    return -1;
}

int LinearSearch_Transportation(struct Array *a,int search)
{
    int i;
    for(i=0;i<a->length;i++)
    {
        if(a->A[i]==search)
        {
            if(i!=0)
             swap(&a->A[i],&a->A[i-1]);
            return i;
        }
    }
    return -1;
}

int LinearSearch_Send_to_first(struct Array *a,int search)
{
    int i;
    for(i=0;i<a->length;i++)
    {
        if(a->A[i]==search)
        {
            if(i!=0)
             swap(&a->A[i],&a->A[0]);
            return i;
        }
    }
    return -1;
}



int main()
{
    struct Array a={{1,2,3,4,5},10,5};
    Display(&a);
    Add(&a,6);
    Display(&a);
    Insert(&a,0,0);
    Display(&a);
    Delete(&a,1);
    Display(&a);
    printf(" %d ",LinearSearch(&a,2));
    printf("\n");
    LinearSearch_Transportation(&a,2);
    LinearSearch_Send_to_first(&a,3);
    Display(&a);
    return 0;
}