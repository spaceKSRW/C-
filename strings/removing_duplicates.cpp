#include<bits/stdc++.h>
using namespace std;
char *solve(char s[],int n){
    int index=0;
    for (int i = 0; i < n; i++)
    {
        int j;
        for ( j = 0; j < i; j++)
        {
            if(s[i]==s[j]) break;
           
        }
         if(j==i) s[index++]=s[i];
    }
    return s;
    
}
int main(){
char  s[]="geeksforgeeks";
int n=sizeof(s)/sizeof(s[0]);
cout<<solve(s,n);

return 0;
}