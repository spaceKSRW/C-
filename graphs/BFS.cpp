#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> graph[] , int u ,int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}
void printbfs(vector<int> graph[] , vector<bool> &visited , int i){
   queue<int> q;
   q.push(i);
   visited[i]=true;
   while(!q.empty()){
    int u=q.front();
    q.pop();
    cout<<u<<" ";
    for(auto val : graph[u]){
        if(visited[val]==false){
            q.push(val);
            visited[val]=true;
        }
    }
   }
}
void bfs(vector<int>graph[] , int v){
    vector<bool> visited(v,false);
    for(int i=0;i<v;i++){
        if(visited[i]==false){
        printbfs(graph , visited,i);
       // cout<<"DISCONNECTION!!!"<<endl;
        }
    }

}
void printdfs(int i, vector<bool> &visited,vector<int>graph[] ){
        cout<<i<<" ";
        visited[i]=true;
    for(auto nodes : graph[i]){
        if(visited[nodes]==false){
            printdfs(nodes , visited , graph);
        }
    }
}
void dfs(vector<int> graph[] ,int  v){
    vector<bool> visited(v,false);
    for(int i=0;i<v;i++)
    {
        if(visited[i]==false)
        {
        printdfs(i,visited,graph);
        }
       
    }
}
void dfsIterative(vector<int> graph[] , int v)
{
  int start=0;  
  stack<int> nodes;
  vector<bool>visited(v,false);
  nodes.push(start);
  visited[start]=true;
  while(!nodes.empty()){
   int node=nodes.top();
   nodes.pop();
   cout<<node<<" ";
   for(auto val : graph[node]){
    if(!visited[val]){
        nodes.push(val);
        visited[val]=true;
    }
   }
  }
}
int main(){
int v=6;
vector<int> graph[v]; 
addedge(graph,0,1);
addedge(graph,1,3);
addedge(graph,3,5);
addedge(graph,5,4);
addedge(graph,4,2);
addedge(graph,2,0);
addedge(graph,0,5);


bfs(graph,v);
cout<<endl;
dfs(graph ,v);
cout<<endl;
dfsIterative(graph , v);
return 0;
}