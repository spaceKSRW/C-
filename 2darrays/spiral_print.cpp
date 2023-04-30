#include <bits/stdc++.h>
using namespace std;
vector<int> spiral_print(vector<vector<int>> vec, int row, int col)
{
    vector<int> v1;
    int start_row = 0;
    int start_col = 0;
    int last_col = col - 1;
    int last_row = row - 1;
    int count = 0;
    int total_ele = row * col;
    while (count < total_ele)
    {
        // first row print
        for (int i = start_col; i <= last_col && count < total_ele; i++)
        {
            // cout<<vec[start_row][i]<<" ";
            v1.push_back(vec[start_row][i]);
            count++;
        }
        start_row++;
        // last column print
        for (int i = start_row; i <= last_row && count < total_ele; i++)
        {
            // cout<<vec[i][last_col];
            v1.push_back(vec[i][last_col]);
            count++;
        }
        last_col--;
        // last row print
        for (int i = last_col; i >= start_col && count < total_ele; i--)
        {
            // cout<<vec[last_row][i];
            v1.push_back(vec[last_row][i]);
            count++;
        }
        last_row--;
        // first column print
        for (int i = last_row; i >= start_row && count < total_ele; i--)
        {
            // cout<<vec[i][start_col]<<"  ";
            v1.push_back(vec[i][start_col]);
            count++;
        }
        start_col++;
    }
    return v1;
}
int main()
{
    int row;
    int col;
    cout << "enter row" << endl;
    cin >> row;
    vector<vector<int>> vec;
    for (int i = 0; i < row; i++)
    {

        int ele;
        vector<int> temp;
        cout << "enter the dimension for row" << i + 1 << endl;
        cin >> col;
        for (int j = 0; j < col; j++)
        {
            cin >> ele;
            temp.push_back(ele);
        }
        vec.push_back(temp);
    }
    vector<int> ans = spiral_print(vec, row, col);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}