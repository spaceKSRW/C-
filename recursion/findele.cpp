#include <bits/stdc++.h>
using namespace std;
bool findval(int arr[], int n, int index, int target)
{
    if (index == n)
    {
        return false;
    }
    if (arr[index] == target)
    {
        return true;
    }
    return(findval(arr,n,index+1,target));
}
int main()
{
    int n;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cin >> n;
    cout << findval(arr, sizeof(arr) / sizeof(arr[0]), 0, n);
    return 0;
}