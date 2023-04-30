#include <bits/stdc++.h>
using namespace std;
void reverse_string(string s)
{
    vector<string> str;
    string temp = " ";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            str.push_back(temp);
            temp = " ";
        }
        else
        {
            temp += s[i];
        }
    }
    str.push_back(temp);

    for (int i = str.size() - 1; i >= 0; i--)
    {
        cout << str[i];
    }
}
int main()
{
    string s = "justice for ssr aka suicide singh rajput";
    reverse_string(s);
    return 0;
}