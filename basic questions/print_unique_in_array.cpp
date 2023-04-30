#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 2, 3, 4, 5, 2, 6, 7, 5, 5, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        while (i < n - 1 && arr[i] == arr[i + 1])
        {
            i++;
        }
        cout << arr[i] << "  ";
    }
    cout << endl;
    // o(nlog n)

    // method 2
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++) // iterate from 0 to ith array for uniqueness
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        if (i == j)
        {
            cout << arr[i] << "  ";
        }
    }

    return 0;
}