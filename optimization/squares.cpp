#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int solve(int n,vector<int> &dp){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
      return dp[n];
    }
    int ans=n;
    for(int i=1;i*i<=n;i++){
        ans=min(ans,solve(n-i*i,dp)+1);
    }
    dp[n]=ans;

    return dp[n];
}

int main(){
int n=1000;
vector<int> dp(n+1,-1);
cout<<solve(n,dp);
return 0;
}