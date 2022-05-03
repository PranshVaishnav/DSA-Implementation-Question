#include <bits/stdc++.h>
using namespace std;

#define long long ll

int prec(char a)
{
    switch (a)
    {
    case '+':
        return 1;
        break;
    case '-':
        return 1;
        break;
    case '*':
        return 2;
        break;
    case '/':
        return 2;
        break;
    case '^':
        return 3;
        break;
    default:
        return -1;
        break;
    }
}

bool isOperator(char a)
{
    if (a == '+' || a == '-' || a == '*' || a == '/' || a == '^' || a == '(' || a == ')')
    {
        return true;
    }
    else
    {
        return false;
    }
}


string infix_To_Postfix(string s)
{
    stack<char> st;
    string result;
    for (int i = 0; i < s.length(); i++)
    {

        if (!isOperator(s[i]))
        {
            result += s[i];
        }
        else
        {
            if (st.empty() || st.top() == '(')
            {
                st.push(s[i]);
            }
            else if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')')
            {
                while (st.top()!= '(')
                {
                    result += st.top();
                    st.pop();
                }
                st.pop();
            }
            else if (prec(s[i]) > prec(st.top()))
            {
                st.push(s[i]);
            }
            else 
            {
                while(!st.empty() && prec(s[i]) <= prec(st.top()))
                {
                    if(s[i]=='^' and st.top()=='^')
                    {
                        break;
                    }
                    else{
                        result += st.top();
                    st.pop();
                    }
                }
                st.push(s[i]);
                    
            }
            
        }
    }
     while(!st.empty())
        {
            result+=st.top();
            st.pop();
        }
    return result;
}


int evaluation(string s)
{
    stack<int> sl;
    for(int i=0;i<s.length();i++)
    {
        if(!isOperator(s[i]))
        {
            int x=s[i]-'0';
            sl.push(x);
        }
        else{
            char c=s[i];
            int a=0;
            int b=0;
            switch(c)
            {
                case '+':
                          a=sl.top();
                          sl.pop();
                          b=sl.top();
                          sl.pop();
                          sl.push(b+a);
                          break;
                
                case '-':
                          a=sl.top();
                          sl.pop();
                          b=sl.top();
                          sl.pop();
                          sl.push(b-a);
                          break;
                
                case '*':
                          a=sl.top();
                          sl.pop();
                          b=sl.top();
                          sl.pop();
                          sl.push(b*a);

                          break;

                case '/':
                          a=sl.top();
                          sl.pop();
                          b=sl.top();
                          sl.pop();
                          sl.push(b/a);
                          break;

                case '^':
                          a=sl.top();
                          sl.pop();
                          b=sl.top();
                          sl.pop();
                          sl.push(pow(b,a));
                          break;
            }
        }
    }
            return sl.top();

}



int main()
{

    string exp = "6+5+3*4";
    string ans= infix_To_Postfix(exp);
    cout<<evaluation(ans);
    return 0;
}