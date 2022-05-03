/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

signed main()
{
 std::vector<int> asd;
 
    string s="hello how  gewg ware you";
    unordered_map<char,int> mp;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    for(auto i:mp)
    {
        if(i.second>1)
        {
            cout<<i.first<<":"<<i.second<<endl;
        }
    }
return 0;
}