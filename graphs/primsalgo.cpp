#include <bits/stdc++.h>
using namespace std;
int primsalgo(vector<pair<int, int>> graph[], vector<int> &parent, vector<bool> &MST, vector<int> &key, int vertex)
{
    int res=0;
    int index;
    key[0] = 0;
    for (int i = 0; i < vertex; i++)
    {
        index = -1;
        for (int j = 0; j < vertex; j++)
        {
            if (!MST[j] && (index == -1 || key[j] < key[index]))
            {
                index = j;
            }
        }
        MST[index] = true;
        res+=key[index];
        for (auto node : graph[index])
        {
            int v = node.first;
            int wt = node.second;
            if (!MST[v])
            {
                key[v] = min(wt, key[v]);
                parent[v] = index;
            }
        }
    }
    return res;
}
int main()
{
    int n, e;
    cout << "Enter the number of nodes" << endl;
    cin >> n;
    vector<pair<int, int>> graph[n];

    cout << "Enter the edges" << endl;
    cin >> e;
    int u, v, wt;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> wt;
        graph[u].push_back(make_pair(v, wt));
        graph[v].push_back(make_pair(u, wt));
    }
    vector<int> parent(n, -1);
    vector<bool> MST(n, false);
    vector<int> key(n, INT_MAX);

    cout << "using prims algo" << primsalgo(graph, parent, MST, key, n) << " is the shortest path ";
    for (int i = 0; i < n; i++)
    {
        cout<<i<<" ka abbu "<<parent[i]<<" "<<endl;
    }
    
    return 0;
}