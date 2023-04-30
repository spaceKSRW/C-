#include <bits/stdc++.h>
using namespace std;

void DFS(int start, vector<bool> &visited, vector<vector<int>> &adjT, vector<int> SCCtemp)
{
    visited[start] = true;
    SCCtemp.push_back(start);

    for (auto nodes : adjT[start])
    {
       if(!visited[nodes]){
        DFS(nodes , visited , adjT , SCCtemp);
       }
    }
}

void DFStemp(int i, vector<bool> &visited, vector<int> graph[], stack<int> st)
{
    visited[i] = true;
    for (int node : graph[i])
    {
        if (!visited[node])
        {
            DFStemp(node, visited, graph, st);
        }
    }
    st.push(i);
}

vector<vector<int>> kosaraju(vector<int> graph[], int n)
{
    // PERFORM DFS and fill the stack

    stack<int> st;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            DFStemp(i, visited, graph, st);
        }
    }

    // Transpose the graph

    vector<vector<int>> adjT(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < graph[i].size(); j++)
        {
            adjT[j].push_back(i);
        }
    }

    // perform DFS on the transposed graph

    visited.assign(n, false);
    vector<vector<int>> SCC;

    while (!st.empty())
    {
        int node = st.top();
        st.pop();

        if (!visited[node])
        {
            vector<int> SCCtemp;
            DFS(node, visited, adjT, SCCtemp);
            SCC.push_back(SCCtemp);
        }
    }
    return SCC;
}

int main()
{
    int n, e;
    int u, v, wt;
    cout << "enter!!" << endl;
    cin >> n >> e;
    vector<int> graph[n];
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
    }
    vector<vector<int>> SCC = kosaraju(graph, n);

    for(auto vec : SCC){
        for(int vals : vec){
            cout<<vals<<"  ";
        }
        cout<<endl;
    }
    return 0;
}