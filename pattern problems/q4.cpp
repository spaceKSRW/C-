// inverted pattern
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << count;
            count++;
        }
        count = 1;

        cout << endl;
       
    }
    cout<<endl;
    // PRINTING BINARY PYRAMID
    int bin = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << bin << " ";

           
            if (bin == 1)
            {
                bin = 0;
            }
            else
            {
                bin = 1;
            }
        }
        cout<<endl;
    }

    return 0;
}