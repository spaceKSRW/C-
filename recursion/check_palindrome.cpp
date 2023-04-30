#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(string str,int n,int i){
    if(i>=n/2){
        return true;
    }
    if(str[i]!=str[n-i-1]){ 
     return false;
    }
    return checkpalindrome(str,n,i+1);
}
int main(){
string s="nitifn";
int n=s.length();
if(checkpalindrome(s,n,0)){
    cout<<"its a palindrome"<<endl;
}
else{
    cout<<"its not"<<endl;
}
return 0;
}