/* Priyanshu Vaishnav */
#include <iostream>
#include<vector>

using namespace std;

signed main()
 {
    vector<int>arr(3);
    arr[0]=1;
    cout<<arr[0]<<endl;
    string s="HellomynameisPriyanshu";
    int length=s.length();
    for(int i=0,j=length-1;i<j;i++,j--)
    {
       char temp=s[i];
       s[i]=s[j];
       s[j]=temp;
    }
     
   cout<<s<<endl;
    
return 0;
}