#include<bits/stdc++.h>
using namespace std;

int MCM(int arr[] , int s , int e,vector<vector<int>> &dp)
{
  if(s>=e)
  {
    return 0;
  }
  
  int mini=INT_MAX;

  for(int k=s;k<e;k++)
  {
   
    int temp=MCM(arr,s,k,dp)+MCM(arr,k+1,e,dp)+arr[s-1]*arr[k]*arr[e];
    mini=min(temp,mini);
  }
  return mini;
}

int main(){
int arr[]={40,20,30,10,30};
int n=sizeof(arr)/sizeof(arr[0]);
vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
cout<<MCM(arr,1,n-1,dp);

return 0;
}