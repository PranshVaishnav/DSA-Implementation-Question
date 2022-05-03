#include<bits/stdc++.h>
#include <string>

using namespace std;


int postfix_evaluation(string s)
{
   stack<int>st;
   string result;
   string x;
   for(int i=0;i<s.length();i++)
   {
       char c=s[i];
       
    if(c==' ' && (s[i-1]>='0' && s[i-1]<='9'))
    {
    int myint1 = stoi(x);
    cout<<myint1<<endl;
        st.push(myint1);
        x="";
         continue;
     }
     else if((c >= '0' && c <= '9'))
     {
         x+=s[i];
         cout<<x<<endl;
     }
     else 
     {
         int val1=st.top();
         st.pop();
         int val2=st.top();
         st.pop();
         switch (s[i])
            {
            case '+': st.push(val2+val1);  break;
            case '-': st.push(val2-val1); break;
            case '*': st.push(val2*val1); break;
            case '/': st.push(val2/val1); break;
            case '^': st.push(pow(val2,val1)); break;; 
            }
            cout<<st.top()<<endl;
     }

   }
   
   return st.top();
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

string s="100 200 +2 /5 *7 +";        //input type should be such that each integer has space between them and no space after operand.
cout<<postfix_evaluation(s);
    return 0;
}