#include <bits/stdc++.h>
using namespace std;
void print_wave(vector<vector<int>> vec, int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (i & 1)
        {
            // odd index, bottom to top
            for (int j = row-1; j >= 0; j--)
            {
                cout << vec[j][i] << " ";
            }
        }
        else
        {
            // even index top to bottom
            for (int j = 0; j < row; j++)
            {
                cout << vec[j][i] << " ";
            }
        }
        cout << endl;
    }
}
void printvec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
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
    // for (int i = 0; i < row; i++)
    // {
    // printvec(vec[i]);
    // cout<<endl;
    // }
    print_wave(vec, row, col);

    return 0;
}