#include <bits/stdc++.h>
using namespace std;
void find_minmax(int arr[], int n) // total comparisons=2(n-1)+1
{

    int min, max;
    // for single array
    if (n == 1)
    {
        max = arr[0];
        min = arr[0];
    }
    if (arr[1] > arr[0])
    {
        max = arr[1];
        min = arr[0];
    }
    else
    {
        max = arr[0];
        min = arr[1];
    }
    int i = 2;
    while (i < n)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
        i++;
    }
    cout << max << "  " << min;
}
void second_approach(int arr[], int n)
{
    int max;
    int min;
    int i = 0;
    if (n % 2 == 0)
    {
        if (arr[1] > arr[0])
        {
            max = arr[1];
            min = arr[0];
        }
        else
        {
            max = arr[0];
            min = arr[1];
        }
        i += 2;
    }
    else
    {
        max = min = arr[0];
        i++;
    }
    while (i < n)
    {
        if (arr[i] < arr[i + 1])
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
            if (arr[i + 1] > max)
            {
                max = arr[i + 1];
            }
        }
        else
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (arr[i + 1] < min)
            {
                min = arr[i + 1];
            }
        }
        i+=2;
    }
    cout<<max<< " "<<min<<endl;
}

int main()
{
    int arr[] = {2, 5, 1, 6, 3, -9};
    int size = sizeof(arr) / sizeof(arr[0]);
    find_minmax(arr, size);
    cout<<endl;
    second_approach(arr,size);
    return 0;
}