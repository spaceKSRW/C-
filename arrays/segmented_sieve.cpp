#include <bits/stdc++.h>
using namespace std;
vector<int> get_primes(int n)
{
    vector <int> final_ans;
    vector<int> ans (n+1,1);
    ans[0]=0;
    ans[1]=0;
    for (int i = 2; i <= n; i++)
    {
       if(ans[i]){
        for (int j = i*2; j <=n; j+=i)
        {
            ans[j]=0;
        }
       } 
    }
    for (int i = 2; i <= n; i++)
    {
        if(ans[i]){
            final_ans.push_back(i);
        }
    }
   // return final_ans;
    for (int i = 0; i < final_ans.size(); i++)
    {
        cout<<final_ans[i]<<" ";
    }
    return final_ans;
    
    
}
int main()
{
    int a, b;
    cin >> a >> b;
    int dummy[b - a + 1];
    for (int i = 0; i <=b-a+1; i++)
    {
        dummy[i]=1;
    }
    
    vector<int> primes=get_primes(int(sqrt(b)));
    for (auto pr : primes)
    {
        int iterator=(pr/a)*a;
        if(iterator<a){
            iterator+=pr;
        }
        for (int i = max(iterator,pr*pr); i <=b; i+=pr)
        {
            dummy[i-a]=0;
        }
        
    }
    for (int i = a; i <=b; i++)
        {
            if(dummy[i-a]){
                cout<<i<<" ";
            }
        }

    return 0;
}