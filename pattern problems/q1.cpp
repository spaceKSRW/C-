#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cout << "enter row and column";
    cin >> x >> y;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << " # ";
        }
        cout << endl;
    }
    cout << endl;
    // HOLLOW RECTANGLE PATTERN

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (j == 0 || j == y - 1)
            {
                cout << " # ";
            }
            else
            {
                if (i == 0 || i == x - 1)
                {
                    cout << " # ";
                }
                else 
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}
