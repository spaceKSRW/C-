#include<bits/stdc++.h>
using namespace std;
void max_occour(string s){
int number[26]={0};
int num;
for (int i = 0; i < s.length(); i++)
{
    if(s[i]>='a' && s[i]<='z'){
        num=s[i]-'a';
    }
    else{
        num=s[i]-'A';
    }
    number[num]++;
}
// calculating maximum occurence
int max=-1;
int ans;
for (int j = 0; j < 26; j++)
{
   if( max<number[j]){
    max=number[j];
    ans=j;
   }

}
char fans=ans+'a';
cout<<"occurrence : "<<max<<endl;
cout<<"character : "<<fans;




} 
int main(){

string s= "output";
max_occour(s);
return 0;
}