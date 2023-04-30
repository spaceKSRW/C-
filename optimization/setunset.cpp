#include <bits/stdc++.h>
using namespace std;
void printBinary(int n)
{
    for (int i = 31; i >= 0; i--)
    {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}
int main()
{
    int bitcheck;
    int n;
    cin >> n;
    cin >> bitcheck;
    printBinary(n);
    if ((n & (1 << bitcheck)) != 0)
    {
        cout << "bit is set , unset ";
        printBinary(n&(~(1<<bitcheck)));
    }
    else
    {
        cout << "not set , setting";
        printBinary(n | (1 << bitcheck));
    }
    cout<<"toggle";
    printBinary(n^(1<<bitcheck));
    return 0;
}