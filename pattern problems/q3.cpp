// half pyramid using numbers

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
    // FLOYD MAYWEATHER TRIANGLE
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
            {
                break;
            }
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    // BUTTERFLY CRIME SCENE PATTERN
    // space = 2*n-2*row no.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
            int space = 2 * n - 2 * i;
            for (int k = 0; k < space; k++)

            {
                cout << " ";
            }
            for (int j = 0; j < i + 1; j++)
            {
                cout<<"*";
            }
        cout<<endl;
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
            int space = 2 * n - 2 * i;
            for (int k = 0; k < space; k++)

            {
                cout << " ";
            }
            for (int j = 0; j < i + 1; j++)
            {
                cout<<"*";
            }
        cout<<endl;
    }

    return 0;
}