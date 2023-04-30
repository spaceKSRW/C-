#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int start, int mid, int end)
{
    int l1 = mid - start + 1;
    int l2 = end - mid;
    int *arr1 = new int[l1];
    int *arr2 = new int[l2];
    int main_index = start;
    for (int i = 0; i < l1; i++)
    {
        arr1[i] = arr[main_index++];
    }
    main_index = mid + 1;
    for (int i = 0; i < l2; i++)
    {
        arr2[i] = arr[main_index++];
    }
    int ptr1 = 0;
    int ptr2 = 0;
    main_index = start;
    while ((ptr1 < l1) && (ptr2 < l2))
    {
        if (arr1[ptr1] < arr2[ptr2])
        {
            arr[main_index++] = arr1[ptr1++];
        }
        else
        {
            arr[main_index++] = arr2[ptr2++];
        }
    }
    while (ptr1 < l1)
    {
        arr[main_index++] = arr1[ptr1++];
    }
    while (ptr2 < l2)
    {
        arr[main_index++] = arr2[ptr2++];
    }
}
void mergesort(int arr[], int start, int end)
{

    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}
int main()
{
    int arr[] = {12, 1, 34, 6, 54, 33, 89, 100, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    mergesort(arr, start, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}