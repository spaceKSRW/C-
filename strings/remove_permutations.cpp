#include <bits/stdc++.h>
using namespace std;
bool check(int arr1[], int arr2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
            return false;
    }
    return true;
}
bool solve(string str1, string str2)
{
    int count1[26] = {0};
    int count2[26] = {0};
    int window = str1.length();
    int index;
    for (int i = 0; i < window; i++)
    {
        index = str1[i] - 'a';
        count1[index]++;
    }
    int i = 0;
    while (i < window && i<str2.length())
    {
        index = str2[i] - 'a';
        count2[index]++;
        i++;
    }
    if (check(count1, count2))
    {
        return true;
    }
    else
    {
        while (i < str2.length())
        {
            index = str2[i] - 'a';
            count2[index]++;
            char old_char = str2[i - window];
            count2[old_char - 'a']--;
            i++;
            if (check(count1, count2))
            {
                return true;
            }
        }
            return false;
    }

}
int main()
{
    string str1 = "abc";
    string str2 = "ddddddcba";
    cout << "the permutation is :" << solve(str1, str2) << endl;
    return 0;
}