#include <bits/stdc++.h>
using namespace std;
#define N 1000000

bool sieve[N + 1];
void createsieve()
{
    for (int i = 0; i <= N; i++)
    {
        sieve[i] = true;
    }
    for (int i = 2; i * i <= N; i++)
    {
        if (sieve[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                sieve[j] = false;
            }
        }
    }
}

vector<int> generatePrimes(int val){
    vector<int> ans;
    for(int i=2;i<=val;i++){
        if(sieve[i])
        ans.push_back(i);
    }
    return ans;
}

int main()
{
    int a ,b;
    cin>>a>>b;

  createsieve();
  vector<int> primes=generatePrimes(int(sqrt(b)));
  vector<int > dummy(b-a+1,1);
  for(auto pt : primes){
    int index=(a/pt)*pt;
    if(index<a){
        index=index+a;
    }
    for(int j=max(index,pt*pt);j<=b;j+=pt){
        dummy[j-a]=0;
    }
  }
    for(int i=a;i<=b;i++){
        if(dummy[i-a]){
            cout<<i;
        }
    }

    return 0;
}