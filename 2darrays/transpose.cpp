#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
           // before rotating
          for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 

   cout<<endl;
   

    // TRANSPOSE OF A MATRIX
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    // for (int i = 0; i < 1; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // ROTATING MATRIX BY 90 DEGREES
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            swap(arr[i][j], arr[3 - 1 - i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}