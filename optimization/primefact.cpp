#include<bits/stdc++.h>
using namespace std;
void primef(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int count=0;
            while(n%i==0){
                n/=i;
                count++;
            }
            cout<<i<<"^"<<count<<endl;
        }
    }
    if(n>1){
        cout<<n<<"^1";
    }
}
int main(){
int n;
cin>>n;
primef(n);
return 0;
}