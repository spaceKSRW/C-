#include <bits/stdc++.h>
using namespace std;

void swaparr(int arr[], int i,int n)
{
    if (i >= n/2) {
     return;
    }
    swap(arr[i],arr[n-1-i]);
    
   swaparr(arr,i+1,n); 
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    swaparr(arr, 0,n);
   for (int  j = 0; j< n; j++)
   {
    cout<<arr[j]<<"  ";
   }
   
    

    return 0;
}