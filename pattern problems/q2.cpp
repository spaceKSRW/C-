// INVERTED HALF PYRAMID

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the dimensions";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i-1; j >= 0; j--)
        {
            cout << "#";
        }
        cout << endl;
    }
    cout<<endl;
// half pyramid after 180 rotation
for (int i = 0; i < n; i++)
{
    for (int j =0; j < n; j++)
    {
        if(j<n-i-1){
            cout<<" ";
        }
        else{
            cout<<"*";
        }
    }
    cout<<endl;
}

    return 0;
}