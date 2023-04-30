#include <bits/stdc++.h>
using namespace std;
vector<char> compress(vector<char> &chars)
{
    int i = 0;
    int ans_index = 0;
    int n = chars.size();
    while(i<n){
        int j=i+1;
        while(j<n && chars[i]==chars[j]){
            j++;
        }
        chars[ans_index++]=chars[i];
        int count=j-i;
        if(count>1){
            string count_str=to_string(count);
            for(int i=0;i<count_str.length();i++){
                chars[ans_index++]=count_str[i];
            }
        }
        i=j;
    }
    for (int i = 0; i < chars.size(); i++)
    {
        cout<<chars[i]<<"  ";
    }
    
}
int main()
{
    vector<char> ch = {'a', 'a', 'b', 'b', 'c','d'};
    vector<char> ans = compress(ch);

    return 0;
}