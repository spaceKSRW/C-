// reverse a string

#include <bits/stdc++.h>
using namespace std;
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
void reverse(char name[], int n)
{
    int s = 0;
    int l = n - 1;
    while (s < l)
    {
        swap(name[s++],name[l--]);
    }
}
int main()
{
    char name[10];
    cout << "enter the name";
    cin >> name;
    int n = getlength(name);
    reverse(name, n);
    cout << name << endl;
    return 0;
}