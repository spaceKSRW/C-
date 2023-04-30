#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,-12,212,-3,4,-1,1123,98};
int n=sizeof(arr)/sizeof(arr[0]);
bool swaps;
for (int i = 0; i<n-1 ; i++)
{
    for (int j = 0; j < n-1-i; j++)
    {
        if(arr[j+1]<arr[j]){
            swap(arr[j+1],arr[j]);
            swaps=true;
        }
      
        }
          if (swaps==false){
            break;

    }
}
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}