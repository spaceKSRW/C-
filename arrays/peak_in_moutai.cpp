#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while (s<e)
    {
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return arr[s];
    
}
int main(){
int arr[]={1,2,5,6,12,34,24,20,10,4,3,2};
int n=sizeof(arr)/sizeof(arr[0]);
int get_peak=solve(arr,n);
cout<<get_peak;
return 0;
}