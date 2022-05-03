/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
#include <stack> //Stack header files

using namespace std;

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

    stack<int> st;
    cout << "Stack: ";
    st.push(5);
    print(st);

    cout << "Stack: ";
    st.push(4);
    print(st);

    cout << "Stack: ";
    st.push(3);
    print(st);

    cout << "Stack: ";
    st.pop();
    print(st);

    cout << "Size of stack: " << st.size();

    return 0;
}