/* Priyanshu Vaishnav */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int size=s.length();
        for(int i=0;i<size-1;i++)
        {
            if(s[i]<s[i+1])
            {
               s.append(s[i], i, 1);
            }
        }
        cout<<s<<endl;
    }
    return 0;
}