#include <bits/stdc++.h>
using namespace std;
int print_sum(int sum, int n)
{
    if (n < 1)
    {
        return sum;
    }
    print_sum(sum + n, n - 1);
}
// ANOTHER METHOD
int print_sum(int n)
{
    if(n==0){
        return 0;
    }
    return n+print_sum(n-1);
}
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    cout << print_sum(sum, n);
    cout << print_sum(n);
    return 0;
}