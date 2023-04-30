#include<bits/stdc++.h>
using namespace std;
int getmax(int arr[] , int index , int n){
    if(index==n){
        return INT_MIN;
    }
    int ans=arr[index];
    return max(ans,getmax(arr,index+1 , n));
}
int main(){
int arr[]={1,2,3,4,5,6,12,33,90,100,102,10000,21,1,1,1};

cout<<getmax(arr,0,sizeof(arr)/sizeof(arr[0]));
return 0;
}