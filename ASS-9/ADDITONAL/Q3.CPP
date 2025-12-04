#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    char c;
    cin >> c;

    int E, V;
    cin >> E >> V;

    vector<vector<pair<int, int>>> adj(V);

    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        if (c == 'N' || c == 'n')
            adj[v].push_back({u, w});
    }

    int key[V];
    bool inMST[V];
    int parent[V];

    for (int i = 0; i < V; i++)
    {
        key[i] = INT_MAX;
        inMST[i] = false;
        parent[i] = -1;
    }

    key[0] = 0;

    for (int count = 0; count < V; ++count)
    {
        int u = -1;
        int mini = INT_MAX;
        for (int v = 0; v < V; ++v)
        {
            if (!inMST[v] && key[v] < mini)
            {
                mini = key[v];
                u = v;
            }
        }

        if (u == -1)
            break;

        inMST[u] = true;

        for (auto edge : adj[u])
        {
            int v = edge.first;
            int weight = edge.second;
            if (!inMST[v] && weight < key[v])
            {
                key[v] = weight;
                parent[v] = u;
            }
        }
    }

    int totalWeight = 0;
    for (int v = 1; v < V; ++v)
    {
        if (parent[v] != -1)
        {
            cout << parent[v] << " -> " << v << " : " << key[v] << "\n";
            totalWeight += key[v];
        }
        else
        {
            cout << v << " is not connected to MST\n";
        }
    }

    cout << totalWeight << "\n";

    return 0;
}