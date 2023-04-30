// 619= six one nine
#include <bits/stdc++.h>
using namespace std;
void saydigit(int num, string arr[])
{
    if (num == 0)
    {
        return;
    }
    int digit = num % 10;
    num = num / 10;
    saydigit(num, arr);
    cout << arr[digit] << "  ";
}
int main()
{
    string arr[10] = {"zero", "one", "two", "thre", "four", "five", "siz", "seven", "eight", "nine"};
    int number;
    cout << "enter number" << endl;
    cin >> number;
    saydigit(number, arr);

    return 0;
}