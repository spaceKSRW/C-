#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int arr[], int k, int n)
{
    vector<int> res;
    for (int i = 0; i < n - k + 1; i++)
    {
        for (int j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                res.push_back(arr[j]);
                break;
            }
            else if (j == (i + k - 1) && arr[j] > 0)
            {
                res.push_back(0);
            }
        }
    }
    return res;
}
int main()
{
    int arr[] = {8, -2, 6, 3, 10, -7, -4};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[1]);
    vector<int> res = solve(arr, k, n);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}