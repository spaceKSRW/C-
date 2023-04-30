#include <bits/stdc++.h>
using namespace std;
int return_last_occurrence(int arr[],int n,int element){
int s = 0;
    int e = n - 1;
    int mid = s +(e -s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (element == arr[mid])
        {
            ans = mid;
            s=mid+1;
        }
        else if (arr[mid] < element)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e -s) / 2;
    }
    return ans;
}
int return_first_pointer(int arr[], int n, int element)
{
    int s = 0;
    int e = n - 1;
    int mid = s +(e -s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (element == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < element)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e -s) / 2;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 1, 2,2,2,2, 3, 3, 3,3,3,3,5};
    int element;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "enter the element";
    cin >> element;
    int first_occurrence = return_first_pointer(arr, n, element);
    int last_occurrence=return_last_occurrence(arr,n,element);
    cout << first_occurrence<<endl;
    cout<<last_occurrence;
    return 0;
}