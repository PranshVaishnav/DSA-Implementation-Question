//Tree Recursion: Multiple call to the function

#include<iostream>
using namespace std;

void func(int x)
{
   if(x>0)
   {
       printf("%d",x);
       func(x-2);
       func(x-2);
   }
}


int main()
{
  func(3);
}