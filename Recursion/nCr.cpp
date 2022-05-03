#include<iostream>
using namespace std;



int factorial_l(int n)
{
    int fact=1;
    for(int i=n;i>0;i--)
    {
      fact=fact*i;
    }
    return fact;
}

double nCr(int n,int r)
{
   int t1;int t2;int t3;
   t1=factorial_l(n);
   t2=factorial_l(r);
   t3=factorial_l(n-r);
   return t1/(t2*t3);
}

double nCr_easy(int n,int r)
{
    if(n==r || r==0)
    {
        return 1;
    }
    return nCr_easy(n-1,r-1)+nCr_easy(n-1,r);
}

int main()
{
    cout<<nCr(10,5)<<endl;
    cout<<nCr_easy(10,5);
}