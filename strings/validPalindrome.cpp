// GIVEN STRING OF ALPHANUMERIC , REMOVE FALTU KI BUCKCHODI AND LOWERCASE IT
#include <bits/stdc++.h>
using namespace std;
bool isValid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    else
        return false;
}
char toLower(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool isPalindrome(string s)
{
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (isValid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = toLower(temp[j]);
    }
    int st = 0;
    int l = temp.length()-1;
    int flag = 0;
    while (st < l)
    {
        if (temp[st] != temp[l])
        {
            flag = 1;
            break;
        }
        else
        {
            st++;
            l--;
        }
    }
    if (flag)
    {
        return false;
    }
    else
        return true;
}
int main()
{
    string s = "no@@#ON";
    if (isPalindrome(s))
    {
        cout << "its a palindrome";
    }
    else
    {
        cout << "not a palindrome";
    }

    return 0;
}