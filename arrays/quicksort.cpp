#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if(arr[i] < pivot){
        count++;
        }
    }
    int pivotindex = s + count;
    swap(arr[pivotindex], arr[s]);
    int i = s;
    int j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }

    }
    return pivotindex;
}
void quicksort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int p = partition(arr, start, end);
    quicksort(arr, start, p - 1);
    quicksort(arr, p + 1, end);
}
int main()
{
    int arr[] = {2, 2, 2, 6, 9,45,33,12,2,122};
    int n = 10;
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}   