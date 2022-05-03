#include <bits/stdc++.h>
using namespace std;

int mx = 1000001;
vector<vector<int>>sf(mx);
vector<bool>prime(mx,false);

void fun(){

    for(int i=2 ; i<mx ; i++){
        if(!(sf[i].size())){
            prime[i] = true;
            sf[i].push_back(i);
            for(int j=i+i ; j<mx ; j+=i){
                sf[j].push_back(i);
            }
        }
    }
}
vector<bool>v;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t,i,j;
    cin>>t;
    fun();

    while(t--){
        int n,x;
        cin>>n;

        v.assign(mx,false);

        for(i=0 ; i<n ; i++){
            cin>>x;
            if(x==1)
            continue;
            for(j=0 ; j<sf[x].size() ; j++)
            v[sf[x][j]] = true;
        }

        for(i=2 ; i<mx ; i++){
            if(!v[i] && prime[i])
            break;
        }
        cout<<i<<endl;
    }

    return 0;
}