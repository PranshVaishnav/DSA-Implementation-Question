/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int size;
    int front;
    int rear;
    stack<int> st;
    stack<int> st2;

    void enqueue(int x);
    int dequeue();
};

void Queue::enqueue(int x)
{
    // transfering everything to st
    while (!st2.empty())
    {
        st.push(st2.top());
        st2.pop();
    }
    st.push(x);
    front = st.top();
}

int Queue::dequeue()
{
    // transfering everything to st2
    while (!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }
    int y = st2.top();
    st2.pop();
    rear = st2.top();
    while (!st2.empty())
    {
       
        st.push(st2.top());
        st2.pop();
    }
    return y;
}

void print(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

signed main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(12);

    Queue q;
    q.size = 10;
    q.front = -1;
    q.rear = -1;


    q.enqueue(50);
    q.enqueue(40);
    q.enqueue(30);
    q.enqueue(20);


    print(q.st);


    q.dequeue();
    print(q.st);

    q.dequeue();
    print(q.st);
    
    
    return 0;
}