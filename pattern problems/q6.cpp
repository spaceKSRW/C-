#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int k = n - 1 - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<<j+1<<"  ";
        }
          
        cout<<endl;
    }

    // PALINDROMIC PATTERN
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1-i; j>0; j--)
        {
            cout<<" ";
        }
        for (int k = i+1; k>0; k--)
        {
            cout<<k;
        }
        for (int k = 1; k<i+1; k++)
        {
            cout<<k+1;
        }
        cout<<endl;
    }
    
    return 0;
}