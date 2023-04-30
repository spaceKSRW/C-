#include <bits/stdc++.h>
using namespace std;
vector<int> sieve(int n)
{
    vector<int > result (n+1,1);
    result[0]=0;
    result[1]=0;
    for (int i = 2; i < result.size(); i++)
    {
        if(result[i]){
            for (int j= i*2; j<result.size() ; j+=i)
            {
                result[j]=0;
            }
            
        }
    }
    
    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<int> ans = sieve(n);
    for ( int i=0;i<ans.size();i++){
        if(ans[i]==1)
        cout<<i<<" ";
    }

    return 0;
}