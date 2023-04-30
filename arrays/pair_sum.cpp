#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> get_pair(int arr[], int n, int element)
{
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == element)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int arr[] = {3, 4, 6, 7, 12, 9, 5, 2, 8, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element;
    cout << "enter whose sum needs to be found" << endl;
    cin >> element;
    vector<vector<int>> v1 = get_pair(arr, n, element);// o(n^2) time
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v1[i].size(); j++)
        {
            cout << v1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}