#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter number"<<endl;
cin>>n;
int ans=0;
int digit=0;
while(n!=0){
    digit=n%10;
    ans=ans*10+digit;
    n=n/10;
}
cout<<ans<<endl;
return 0;
}