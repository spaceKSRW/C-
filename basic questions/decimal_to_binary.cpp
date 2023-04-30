#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int ans = 0;
    int i = 0;
    while (N != 0)
    {
        int digit = N & 1;
        ans = (digit * pow(10, i) )+ ans;
        N = N >> 1;
        i++;
    }
    cout << ans;

    return 0;
}