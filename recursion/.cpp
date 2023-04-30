#include<bits/stdc++.h>
using namespace std;
void get_ss(string name,string temp,int index,int size){
   if(index==size){
    cout<<temp<<endl;
    return;
   }
   temp.push_back(name[index]);
   get_ss(name,temp,index+1,size);
   temp.pop_back();
   get_ss(name,temp,index+1,size);

}
int main(){
string name="abcdef";
int n=name.length();
string temp="";
int specified_subsequence_length=3;
get_ss(name,temp,0,specified_subsequence_length);
return 0;
}