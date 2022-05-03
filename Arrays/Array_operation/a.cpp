/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void leftShift(int *A,int x,int length)
{
   int i;
   
   x=x%length;
   for(int i=0;i<length;i++)
   {
       if(i<x)
       {
           cout<<A[length+i-x]<<" ";
       }
       else{
           cout<<A[i-x]<<" ";
       }
   }
   cout<<endl;

}


void Rearrange(int * A,int length)
{
    int i = 0;
    int j = length - 1;

    while (i < j)
    {
        
        if(A[j]<0)
        {
            swap(&A[i],&A[j]);
        }
        
        else if(A[i]>=0)
        {
            swap(&A[i],&A[j]);
        }
        if(A[j]>0)
        {
            j--;
        }
        else if(A[i]<0)
        {
            i++;
        }
    }

}


signed main()
{
    int A[10]={-6,3,-8,10,5,-7,-9,12,-4,2};
    Rearrange(A,10);
    for(int i=0;i<10;i++)
    {
        cout<<A[i]<<endl;
    }
    return 0;
}