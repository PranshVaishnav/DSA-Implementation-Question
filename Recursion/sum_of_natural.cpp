#include<iostream>
using namespace std;


int  natural(int n)
{
    if(n==0)
    {
        return 0; 
    }
    return natural(n-1)+n;
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    cout<<natural(2);
}