#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int count=1;
int c2=1;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<" ";
    }
    for(int j=0;j<n;j++){
        if(j>i){
            break;
        }
        else cout<<count++;
    }
    count=1;
    cout<<endl;
    
}
count=1;
 for (int i = 0; i < n; i++)
 {
    for (int  j = 0; j < n; j++)
    {
        if(j<n-1-i){
            cout<<" ";
        }
        else {
            cout<<count++;
        }
    }
    cout<<endl;
  count=1;  
 }
 
return 0;
}