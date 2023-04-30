#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cout<<"enter value"<<endl;
    cin >> n;
    while (n != 0)
    {
        if (n&1)
        {
            count++;
        }
      n=  n >> 1;
    }
    cout << count;
    return 0;
}