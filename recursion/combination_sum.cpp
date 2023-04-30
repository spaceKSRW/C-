#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], vector<int>& vec, int index, int n, int target, vector<vector<int>> &ans)
{
    if (n == index)
    {
        if (target == 0)
        {
            ans.push_back(vec);
        }
        return;
    }
    if (target >= arr[index])
    {
        vec.push_back(arr[index]);
        solve(arr, vec, index, n, target - arr[index],ans);
        vec.pop_back();
    }
    solve(arr, vec, index + 1, n, target,ans);
}
int main()
{
    int arr[] = {2, 3, 6, 7,1,1,1,1,1};
    int target;
    cout<<"enter target"<<endl;
    cin >> target;
    vector<int> vec;
    vector<vector<int>>ans;
    solve(arr, vec, 0, 9, target,ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
        
    }
    
    return 0;
}