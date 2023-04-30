
#include <bits/stdc++.h>
using namespace std;
bool check_equal(int arr1[], int arr2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}
bool check_palindrome(string s1, string s2)
{
    int c1[26] = {0};
    int val;
    for (int i = 0; i < s1.length(); i++)
    {
        val = s1[i] - 'a';
        c1[val]++;
    }
    // now creating window
    int start = 0;
    int window_size = s1.length();
    int c2[26] = {0};
    while (start < window_size && start < s2.length())
    {
        int index = s2[start] - 'a';
        c2[index]++;
        start++;
    }
    if (check_equal(c1, c2))
    {
        return 1;
    }
    // PROCESSING FOR FURTHER WINDOW
    else
    {
        while (start < s2.length())
        {
            int new_index = s2[start] - 'a';
            c2[new_index]++;
            int old_index = s2[start - window_size] - 'a';
            c2[old_index]--;
            start++;
            if (check_equal(c1, c2))
            {
                return 1;
            }
        }
  return 0;
    }
}
int main()
{
    string s2= "cccdba";
    string s1= "ab";
    cout<<check_palindrome(s1,s2);
    return 0;
}