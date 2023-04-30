#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0, 1, 0, 1, 2, 2, 2, 2, 0, 0, 1, 1, 1, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            c1++;
        }
        if (arr[i] == 1)
        {
            c2++;
        }
        if (arr[i] == 2)
        {
            c3++;
        }
    }
    for (int i = 0; i < c1; i++)
    {
        arr[i]=0;
    }
    for (int i = c1; i < c1+c2; i++)
    {
        arr[i]=1;
    }
    
    for (int i = c1+c2; i < c1+c2+c3; i++)
    {
        arr[i]=2;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    

    return 0;
}