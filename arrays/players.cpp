#include <bits/stdc++.h>
using namespace std;


bool solve(int ele, vector<vector<int>> &matrix, int m, int n, unordered_map<int, int> &row, unordered_map<int, int> &col)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == ele)
            {
                row[i]++;
                col[j]++;
                if (row[i] == n)
                {
                    return true;
                }
                if (col[j] == m)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat)
{
    unordered_map<int, int> row;
    unordered_map<int, int> col;
    for (int i = 0; i < arr.size(); i++)
    {
        if (solve(arr[i], mat, mat.size(), mat[0].size(), row, col))
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<vector<int>> vec{{4, 3, 5}, {1, 2, 6}};
    vector<int> arr{1, 4, 5, 2, 6, 3};
    cout<<firstCompleteIndex(arr, vec);
    return 0;
}

