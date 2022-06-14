#include <bits/stdc++.h>
using namespace std;

#define V 5

int minKey(int key[], bool mstSet[])
{
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
    {
        if (mstSet[v] == false && key[v] < min)
        {
            min = key[v], min_index = v;
        }
    }
    return min_index;
}

// printing the graph/

void printMST(int parent[], int graph[V][V])
{
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << " \n";
}

void primMST(int graph[V][V])
{

    int key[V];

    int parent[V];

    bool mstSet[V];

    // Initialize all keys as infinite && all mstSet values to False;
    for (int i = 0; i < V; i++)
    {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }

    //  root element has no parent so the parent value is always zero &&
    //  the value of key is set to be 0 as the distance of 0 to itself is 0;
    key[0] = 0;
    parent[0] = -1;

    //  V-1 cause the mstSet will have total V values && one of them is already been filled by the initial 0;
    for (int count = 0; count < V - 1; count++)
    {
        int u = minKey(key, mstSet); // return starting index of minimum key that is not present in mstSet.

        mstSet[u] = true;

        for (int v = 0; v < V; v++)
        {
            // graph[u][v] is non zero only for adjacent vertices of m
            // mstSet[v] is false for vertices not yet included in MST
            // Update the key only if graph[u][v] is smaller than key[v]
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
            {
                parent[v] = u, key[v] = graph[u][v];
            }
        }
    }
    printMST(parent, graph);
}

int main()
{
    int graph[V][V] = {{0, 2, 0, 6, 0},
                       {2, 0, 3, 8, 5},
                       {0, 3, 0, 0, 7},
                       {6, 8, 0, 0, 9},
                       {0, 5, 7, 9, 0}};

    // Print the solution
    primMST(graph);

    return 0;
}