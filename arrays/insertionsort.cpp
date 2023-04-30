#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,-12,212,-3,4,-1,1123,98};
int n=sizeof(arr)/sizeof(arr[0]);
for (int i = 1; i < n; i++)
{
    for (int j = i-1; j>=0; j--)
    {
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        else{
            break;
        }
    }
    
}
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<"  ";
}

return 0;
}