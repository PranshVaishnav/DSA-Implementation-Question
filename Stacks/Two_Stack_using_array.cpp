/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int size;
    int *arr;
    int top_1;
    int top_2;

    void push_1(int x);
    void push_2(int x);
    void pop_1();
    void pop_2();
    bool isFull();
    bool isEmpty_1();
    bool isEmpty_2();
    void print();
};

void Stack::push_1(int x)
{
    // Check if is Full
    if (isFull())
    {
        cout << "Stack OverFlow" << endl;
    }
    else
    {
        top_1++;
        arr[top_1] = x;
    }
}

void Stack::push_2(int x)
{
    if (isFull())
    {
        cout << "Stack OverFlow" << endl;
    }
    else
    {
        top_2--;
        arr[top_2] = x;
    }
}

void Stack::pop_1()
{
    if (top_1 >= 0)
    {
        top_1--;
    }
}

void Stack::pop_2()
{
    if (top_2 <= size - 1)
    {
        top_2++;
    }
}

bool Stack::isFull()
{
    if (top_1 == top_2 - 1)
    {
        return true;
    }
    return false;
}

bool Stack::isEmpty_1()
{
    if (top_1 == -1)
    {
        return true;
    }
    return false;
}

bool Stack::isEmpty_2()
{
    if (top_2 == -1 || top_2 == size)
    {
        return true;
    }
    return false;
}

void Stack::print()
{

    cout << "Stack 1 --> ";
    for (int i = top_1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Stack 2 --> ";
    for (int i = top_2; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

signed main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(12);
    Stack st;
    cout << "Enter the size of the array: " << endl;
    cin >> st.size;
    st.arr = new int[st.size]();
    st.top_1 = -1;
    st.top_2 = st.size;

    cout << "After Inserting Elements Stacks Are:" << endl;
    st.push_1(5);
    st.push_1(6);
    st.push_1(3);
    st.push_1(2);
    st.push_1(7);

    st.push_2(4);
    st.push_2(3);
    st.push_2(6);
    st.push_2(9);
    st.push_2(10);

    st.print();

    cout << st.isFull() << endl;

    cout << "After Popping Elements Stacks Are:" << endl;
    st.pop_1();
    st.pop_1();
    st.pop_1();
    st.pop_1();
    st.pop_1();
    
    cout<<st.isEmpty_1()<<endl;
    cout<<st.isEmpty_2()<<endl;
    st.pop_2();
     
    st.push_1(6);
    st.print();
    return 0;
}