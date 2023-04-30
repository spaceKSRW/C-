#include <bits/stdc++.h>
using namespace std;
void search(int arr[][100], int row, int col, int target)
{
    int start_row = 0;
    int start_col = col - 1;
    int flag = 0;
    while (start_row < row && start_col >= 0)
    {
        int ele = arr[start_row][start_col];
        if (ele == target)
        {
            cout << "element found!! " << endl;
            flag = 1;
        }
        if (ele > target)
        {
            start_col--;
        }
        else
        {
            start_row++;
        }
    }
    if (flag == 0)
    {
        cout << "element not present";
    }
}
int main()
{
    int arr[100][100];
    int row;
    int col;
    int target;
    cout << "Enter the number of rows";
    cin >> row;
    cout << "\n Enter the number of columns" << endl;
    cin >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\n Enter the element to be searched" << endl;
    cin >> target;
    search(arr, row, col, target);

    return 0;
}