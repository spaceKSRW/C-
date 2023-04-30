#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int start, int end, int ele, int n, int ans)
{
    if (start >= end)
    {
        return ans;
    }
    int mid = (start + end) / 2;
    if (arr[mid] == ele)
    {
        ans = mid;
        end = mid - 1;
         solve(arr, start, end, ele, n, ans);
    }
    if (arr[mid] > ele)
    {
        solve(arr, start, mid-1, ele, n, ans);
    }
    else{
        solve(arr, mid+1, end, ele, n, ans);
    }
    return ans;
}
int main()
{
    int arr[] = {1, 1, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 7, 8, 9};
    int element = 6;
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    cout << solve(arr, start, end, element, sizeof(arr) / sizeof(arr[0]), -1);
    return 0;
}