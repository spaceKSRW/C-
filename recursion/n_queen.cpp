#include <bits/stdc++.h>
using namespace std;
bool is_possible(int row, int col, vector<string> board, int n)
{
    int row_copy = row;
    int col_copy = col;
    // HORIZONTAL CHECK
    while (col >= 0)
    {
        if (board[row][col] == 'Q')
        {
            return false;
        }
        col--;
    }
    col = col_copy;
    // NW check
    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 'Q')
        {
            return false;
        }
        row--;
        col--;
    }
    row = row_copy;
    col = col_copy;
    // SW check
    while (row < n && col >= 0)
    {
        if (board[row][col] == 'Q')
        {
            return false;
        }
        row++;
        col--;
    }
    return true;
}
void solve(vector<vector<string>> & ans, vector<string> board, int n, int col)
{
    if (col == n)
    {
        ans.push_back(board);
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (is_possible(row, col, board, n))
        {
            board[row][col] = 'Q';
            solve(ans, board, n, col + 1);
            board[row][col] = 'X';
        }
    }
}
int main()
{
    int n;
    cout << "Entter the dimension of chessboard" << endl;
    cin >> n;
    vector<vector<string>> ans;
    vector<string> vec(n);
    string filler(n, 'X');
    vector<string>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        *it = filler;
    }
    // for (it = vec.begin(); it != vec.end(); it++)
    // {
    //     cout << *it << " ";
    //     cout << endl;
    // }
    solve(ans, vec, n, 0);
     for (int i = 0; i < ans.size(); i++)
     {
        for (int j = 0; j< ans[i].size(); j++)
        {
            cout<<ans[i][j]<<endl;
        }
        cout<<endl;
        
     }
     
    return 0;
}