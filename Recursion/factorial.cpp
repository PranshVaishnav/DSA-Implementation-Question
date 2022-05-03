#include<iostream>
using namespace std;




//Using Loop

int factorial_l(int n)
{
    int fact=1;
    for(int i=n;i>0;i--)
    {
      fact=fact*i;
    }
    return fact;
}


int factorial(int n)
{

    if(n==1)
    {
        return 1;
    }
    return factorial(n-1)*n;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<factorial(5)<<endl;
    cout<<factorial_l(5)<<endl;
    cout<<factorial(10)<<endl;
    cout<<factorial_l(10)<<endl;
}