#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxi = arr[0];
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        start += arr[i];
        maxi = max(start, maxi); 
        if (start < 0)
        {
            start = 0;
        }
    }
    cout << maxi << endl;
    return 0;
}