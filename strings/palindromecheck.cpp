
// CASE INSENSITIVE

#include <bits/stdc++.h>
using namespace std;
char toLower(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}
int getlength(char name[])
{
    int count = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
bool check_palindrome(char name[])
{
    int length = getlength(name);
    int start = 0;
    int last = length - 1;
    int flag=0;
    while (start < last)
    {
        if(toLower(name[start])!=toLower(name[last])){
            flag=1;
            break;
        }
        else{
            start++;
            last--;
        }
    }
    if(flag){
        return false;
    }
    else return true;
}
int main()
{
    char name[20];
    cout << "\n enter name";
    cin >> name;
    if (check_palindrome(name))
    {
        cout << "it is a palindrome";
    }
    else
    {
        cout << "it is NOT a palindrome";
    }

    return 0;
}