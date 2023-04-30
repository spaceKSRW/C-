#include<bits/stdc++.h>
using namespace std;
int main(){
 string keypad []={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666",
    "7","77","777","7777","8","88","888","9","99","999","9999"} ;
    string ans;
    cin>>ans;
    string res="";
    for (int i = 0; i < ans.size(); i++)
    {
        int index=ans[i]-'A';
        res+=keypad[index];
    }
    cout<<res;
    
   

    return 0;
}