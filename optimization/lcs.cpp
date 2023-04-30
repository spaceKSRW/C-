#include <bits/stdc++.h>
#include <cstring>
#define N 100
using namespace std;
int dp[N + 1][N + 1];
void LCS(string str1, string str2, int n, int m)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    int ans_index = dp[n][m];
    int i = n;
    int j = m;
    string ans = "";
    for (int i = 0; i < ans_index; i++)
    {
        ans.push_back('X');
    }
    ans_index--;
    while (i > 0 && j > 0)
    {
        if (str1[i - 1] == str2[j - 1])
        {
            ans[ans_index--] = str1[i - 1];
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    cout<<ans;
}
int main()
{
    string str1 = "abcdgh";
    string str2 = "aedfhr";
    int n = str1.size();
    int m = str2.size();
    memset(dp, 0, sizeof(dp));
    LCS(str1, str2, n, m);
}