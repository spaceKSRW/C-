#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> vec, int n, int stud)
{
    sort(vec.begin(), vec.end());
    int diff = INT_MAX;
    int i;
    for (int j = stud - 1, i = 0; j < n; j++, i++)
    {
        diff = min(diff, vec[j] - vec[i]);
    }
    return diff;
}
int main()
{
    vector<int> vec;
    int n, x, stud;
    cin >> stud;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    int ans = solve(vec, vec.size(), stud);
    cout<<ans;
    return 0;
}