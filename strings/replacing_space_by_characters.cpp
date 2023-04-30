#include<bits/stdc++.h>
using namespace std;
void replace_space(string str){
    string s="";
    string s2="@40";
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]==' '){
           s+=s2;
        }
        else{
            s+=str[i];
        }
    }

    cout<<s<<" ";
    
}
int main(){
string str="suicide singh rajput";
replace_space(str);
return 0;
}