#include <bits/stdc++.h>
using namespace std;
void remove_occourence(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    cout<<s<<" ";
}
int main()
{
    string str = "daabcbaabcbc";
    string part = "abc";
    remove_occourence(str, part);

    return 0;
}