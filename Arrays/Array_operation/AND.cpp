#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> bitwise(vector<int>arr,int n)
{
    vector<int>new_arr;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            new_arr.push_back(arr[i]&arr[j]);
        }
    }
    return new_arr;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        arr=bitwise(arr,n);
        while(arr.size()>1){
        int maxi=*max_element(arr.begin(),arr.end());
        int mini=*min_element(arr.begin(),arr.end());
        arr.erase(remove(arr.begin(), arr.end(), maxi), arr.end());
        arr.erase(remove(arr.begin(), arr.end(), mini), arr.end());
        arr.push_back(maxi|mini);
        }
        cout<<arr[0]<<"\n";
    }
	return 0;
}
