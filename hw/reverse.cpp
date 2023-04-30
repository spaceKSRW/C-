#include <bits/stdc++.h>
using namespace std;
void reverse(string &str, int n, int i, string &temp)
{
    if (i == n)
    {
        return;
    }
    reverse(str, n, i + 1, temp);
    temp.push_back(str[i]);
}
int main()
{
    string str = "karan";
    string temp = "";
    reverse(str, str.length(), 0,temp);
    cout<<temp;
    return 0;
}