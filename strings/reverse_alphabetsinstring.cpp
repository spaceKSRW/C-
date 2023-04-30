#include <bits/stdc++.h>
using namespace std;
void rev(string &str)
{
    int s = 0;
    int l = str.length() - 1;
    while (s < l)
    {
        swap(str[s++], str[l--]);
    }
}
void reverse_word(string s)
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

    for (int i = 0; i < str.size(); i++)
    {
        rev(str[i]);
    }
    for (int i = 0; i <str.size(); i++)
    {
        cout<<str[i]<<" ";
    }
    
}
int main()
{
    string s = "justice for ssr aka suicide singh rajput";
    reverse_word(s);
    return 0;
}