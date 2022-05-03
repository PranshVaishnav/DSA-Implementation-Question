#include <iostream>
#include<algorithm>
#include<vector>
#define ll long long 

using namespace std;

int i=0;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
ll findlcm(int arr[], int n)
{
    ll ans = arr[0];
 
    for (i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}
 
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

vector<int> printPrime(int n)
{
    vector<int>primes;
    for (i = 2; i <= n; i++) {
        if (isPrime(i))
        {
            primes.push_back(i);
        }
    }
    return primes;
}

int getMax(int arr[], int n)
{
    int res = arr[0];
    for ( i = 1; i < n; i++)
        res = max(res, arr[i]);
    return res;
    
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
        int *arr=new int[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int min=getMax(arr,n);
        vector<int>generatePrime=printPrime(min);
        int lcm=findlcm(arr, n);
        for(int j : generatePrime)
        {
            if(!(lcm%j==0))
            {
                cout<< j;
                break;
            }
        }
    }
	return 0;
}
