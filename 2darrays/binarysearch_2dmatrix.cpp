#include <bits/stdc++.h>
using namespace std;
void twodsearch(int arr[][100], int row, int col, int target)
{
    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start) / 2;
    int flag=0;

    while (start <= end)
    {

        int ele = arr[mid / col][mid % col];
        if (target == ele)
        {
            cout << "element found";
            flag=1;
        }
        if (target > ele)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    if(flag==0){
        cout<<"\n element was not present";
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
    twodsearch(arr, row, col, target);

    return 0;
}