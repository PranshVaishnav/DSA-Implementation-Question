#include<iostream>
using namespace std;

void func(int);

void fun(int x)
{
   if(x>0)
   {
       cout<<x<<endl;
       func(x+1);
   }
}

void func(int x)
{
    if(x>0)
    {
        cout<<x<<endl;
        fun(x-2);
    }
} 

int main()
{
fun(10);
}