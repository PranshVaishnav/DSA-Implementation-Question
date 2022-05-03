#include <bits/stdc++.h>
using namespace std;

class Stack
{

public:
    int top;

    int arr[1000];

    Stack()
    {
        top = -1;
    }

    void push(int x)
    {
      arr[top+1]=x;
      top++;
    }

    void pop()
    {
        top--;
    }

    int peak()
    {
       return arr[top];
    }

    bool isEmpty()
    {
        return (top < 0);
    }
    
    void print()
    {
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    Stack obj;
    obj.push(5);
    obj.push(4);
    obj.push(3);
    obj.push(2);
    obj.push(1);
    obj.print();
    obj.pop();
    obj.print();
  cout<<obj.peak();
  while(!obj.isEmpty())
    {
        // print top element in stack
        cout<<obj.peak()<<" ";
        // remove top element in stack
        obj.pop();
    }
    return 0;
}