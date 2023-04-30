// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void getTopoSort(stack<int> &st, int start, int visited[], vector<pair<int, int>> graph[])
{

    visited[start] = true;
    for (auto child : graph[start])
    {
        if (!visited[child.first])
        {
            getTopoSort(st, child.first, visited, graph);
        }
    }
    st.push(start);
}
void shortestPath(int n, vector<pair<int, int>> graph[])
{
    int visited[n] = {0};
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        getTopoSort(st, i, visited, graph);
    }
    int dist[n];
    for (int i = 0; i < n; i++)
    {
        dist[i] = 1e9;
    }
    dist[0] = 0;
    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        if (node != 1e9)
        {
            for (auto child : graph[node])
            {
                if (dist[node]+ child.second<dist[child.first]){
                    dist[child.first]=dist[node]+child.second;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        (dist[i]==1e9)? cout<<"INF" : cout<<dist[i]<<" ";
    }
}
int main()
{
    int n, e;
    int u, v, wt;
    cout<<"enter!!"<<endl;
    cin >> n >> e;
    vector<pair<int, int>> graph[n];
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> wt;
        graph[u].push_back(make_pair(v, wt));
    }
    shortestPath(n, graph);
    return 0;
}