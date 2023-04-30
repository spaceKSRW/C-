#include <bits/stdc++.h>
#define N 10000
using namespace std;

vector<int> graph[N];

bool cycle(int start, int parent, vector<bool> &visited, int n)
{
    visited[start] = true;

    for (auto child : graph[start])
    {
        if(visited[child]==false){
            if(cycle(child,start,visited,n)){
                return true;
            }
        }
        else{
            if(child!=parent){
                return true;
            }
        }

    }
    return false;
}

bool cycleDetect(int start, vector<bool> &visited, int n)
{
    for (int i = start; i < n; i++)
    {
        if (visited[i] == false)
        {
            if (cycle(start, -1, visited, n))
            {
                return true;
            }
        }
      
    }
      return false;
}
int main()
{
    int n, e;
    int v, u;
    cout<<"Enter nodes and edges"<<endl;
    cin >> n;
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        cout<<"\nEnter the initial and final node"<<endl;
        cin >> v;
        cin >> u;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }
    int start = 0;
    int parent = -1;
    vector<bool> visited(n, false);
    cout<<cycleDetect(start,visited,n);
    return 0;
}