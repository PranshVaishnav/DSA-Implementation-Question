/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

#define int long long

int Partition(vector<int>arr,int l,int h)
{
    
}


void MergeSort(vector<int>arr,int l,int h)
{
    int index=Partition(arr,l,h);
    while(l<h)
    {
        MergeSort(arr,0,index);
        MergeSort(arr,index+1,h);
    }
}

void print(vector<int>arr)
{
       for(int i=0;i<arr.size();i++)
       {
            cout<<arr[i]<<" ";
       }
       cout<<endl;
}

signed main()
{

ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
cout << fixed << setprecision(12);
int t = 1;
cin >> t;
while (t--) {
vector<int>arr={5,4,8,2,1,6,7,9};
MergeSort(arr,0,arr.size()-1);
print(arr);
}
return 0;
}