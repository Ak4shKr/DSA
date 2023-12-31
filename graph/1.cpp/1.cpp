#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction)
    {
        // direction-0 for undirected
        // direction-1 for directed

        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
        }

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
};
int main()
{

    graph g;
    int n;
    cout << "enter the number of nodes:" << endl;
    cin >> n;

    int m;
    cout << "enter the number of edges:" << endl;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // creating an undirected graph
        g.addEdge(u, v, 0);
    }
    // printing graph
    g.printAdjList();
    return 0;
}