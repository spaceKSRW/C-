#include <bits/stdc++.h>
using namespace std;

pair<int, int> position(int arr[], int n,int val)
{
    pair<int, int> ans;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if ((arr[i] == arr[j])&&(arr[i]==val && arr[j]==val))
        {
            ans = make_pair(i, j);
            return ans;
        }
        if (arr[i] < val)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}
int main()
{
    int arr[] = {0, 0, 1, 1, 2, 2, 2, 2,3,3,4};
    int n = 11;
    int val;
    cout << "enter the value to be searched for" << endl;
    cin >> val;
    pair<int, int> p1 = position(arr, n,val); // 0(n) time complexity

    cout << p1.first << " " << p1.second;
    return 0;
}