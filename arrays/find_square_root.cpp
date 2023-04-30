#include <bits/stdc++.h>
using namespace std;
int get_square_root(int n)
{
    int s = 0;
    int e = n;
    int ans = -1;
    long long int mid = (s + e) / 2;
    while (s < e)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}
double more_precise(int ans, int n, int till_decimal)
{
    double temp_ans = ans;
    double factor=1;
    for (int i = 0; i < till_decimal; i++)
    {
        factor=factor/10;
        for (double j = temp_ans; j*j <n ; j+=factor)
        {
            temp_ans=j;
        }
        
    }
    return temp_ans;
    
}
int main()
{
    int n;
    cout<<"enter element"<<endl;
    cin >> n;
    int ans = get_square_root(n);
    cout << ans << endl;

    if (ans * ans != n)
    {
        cout << "the ans given is not precise computing till 0(n^2) for better answer , at 3 decimals" << endl;
        double correct = more_precise(ans, n, 3);
        cout<<correct<<endl;
    }
    return 0;
}