#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
int main(){
int a,b;
cin>>a>>b;
int ans=1;
while(b){
    if(b&1){
    ans=(ans*a)%M;
    // cout<<ans<<" ";
    }
    b=b>>1;
    a=a*a;
}
cout<<ans;
return 0;
}