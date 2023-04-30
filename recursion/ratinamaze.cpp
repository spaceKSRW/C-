
#include <bits/stdc++.h>
using namespace std;
bool is_safe(int x, int y, int n, vector<vector<int>> &visited, vector<vector<int>> &maze)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && maze[x][y] == 1)
    {
        return true;
    }
    else
        return false;
}
void solve(vector<vector<int>> &maze, int n, vector<string> &ans, int x, int y, vector<vector<int>> &visited, string &path)
{
    // base case
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }
    // you have visited x , y here
    visited[x][y] = 1;
    // FOUR CHOICE D,L,R,L
    // DOWN CHOICE
    int new_x = x + 1;
    int new_y = y;
    if ((is_safe(new_x, new_y, n, visited, maze)))
    {
        path.push_back('D');
        solve(maze, n, ans, new_x, new_y, visited, path);
        path.pop_back();
    }
    // LEFT CHOICE
    new_x = x;
    new_y = y - 1;
    if ((is_safe(new_x, new_y, n, visited, maze)))
    {
        path.push_back('L');
        solve(maze, n, ans, new_x, new_y, visited, path);
        path.pop_back();
    }
    // RIGHT CHOICE
    new_x = x;
    new_y = y + 1;
    if ((is_safe(new_x, new_y, n, visited, maze)))
    {
        path.push_back('R');
        solve(maze, n, ans, new_x, new_y, visited, path);
        path.pop_back();
    }
    // UP CHOICE
    new_x = x - 1;
    new_y = y;
    if ((is_safe(new_x, new_y, n, visited, maze)))
    {
        path.push_back('U');
        solve(maze, n, ans, new_x, new_y, visited, path);
        path.pop_back();
    }

    // BACKTRACKING
    visited[x][y] = 0;
}
vector<string> findpath(vector<vector<int>> &maze, int n)
{
    vector<string> ans;
    if (maze[0][0] == 0)
    {
        return ans;
    }
    int src_x = 0;
    int src_y = 0;
    vector<vector<int>> visited;
    // initialize with zero
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }
    string path = "";
    solve(maze, n, ans, src_x, src_y, visited, path);
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<vector<int>> maze ;
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cin>>maze[i][j];
        }
        
    }
    
    vector<string> ans = findpath(maze, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    return 0;
}