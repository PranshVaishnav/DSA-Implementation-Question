#include <bits/stdc++.h>
using namespace std;

void BFS(int A[8][8], int i)
{
    queue<int> q;
    int n = sizeof(A[0]) / sizeof(A[0][0]);
    vector<int> visited(n, 0);
    q.push(i);
    visited[i] = 1;
    cout<<i<<" ";
    int u;
    while (!q.empty())
    {
        u=q.front();
        q.pop();

        for(int v=1;v<=n;v++)
        {

            if(A[u][v]==1 && visited[v]==0)
            {
                cout<<v<<" ";
                q.push(v);
                visited[v]=1;
            }
        }
    }
}

signed main()
{
    int A[8][8] = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 1, 1, 0, 0, 0},
        {0, 1, 0, 1, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0},
        {0, 1, 0, 1, 0, 1, 0, 0},
        {0, 0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0}};

    BFS(A, 1);
}