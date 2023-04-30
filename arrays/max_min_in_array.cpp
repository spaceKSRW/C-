#include<bits/stdc++.h>
using namespace std;
int main(){
    int maxi=INT_MIN;
    int mini=INT_MAX;
int arr[]={1,2,3,4,5,12,33,-1,-69};
int n=sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < n; i++)
{
    if(arr[i]<mini){
        mini=arr[i];
    }
    if(arr[i]>maxi){
        maxi=arr[i];
    }
}
cout<<maxi<<"  "<<mini;
return 0;
}