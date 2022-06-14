#include <bits/stdc++.h>
using namespace std;

// Graph

int A[8][8] = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {0, 1, 0, 1, 0, 0, 0, 0},
    {0, 1, 1, 0, 1, 1, 0, 0},
    {0, 1, 0, 1, 0, 1, 0, 0},
    {0, 0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0}};

int n=8;

int visited[8]={0};
//Code for DFS

void DFS(int i)
{
    cout<<i<<" ";
    visited[i]=1;
    for(int v=1;v<=n;v++)
    {
        if(visited[v]==0)
          DFS(v);
    }
}

signed main()
{
    DFS(1);
}