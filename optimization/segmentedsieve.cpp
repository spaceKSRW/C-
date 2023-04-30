#include <bits/stdc++.h>
#include <cmath>
#include <vector>
#define N 10

using namespace std;

bool sieve[N];

void createSieve()
{

    for (int i = 2; i <= N; i++)
    {
        sieve[i] = true;
    }

    for (int i = 2; i * i <= N; i++)
    {
        if (sieve[i] == true)
        {

            for (int j = i * i; j <= N; j+=i)
            {
                sieve[i] = false;
            }
        }
    }
    for(int i =2 ;i<=N;i++){
        if(sieve[i]){
            cout<<i;
        }
    }
    cout<<endl;
}
vector<int> generatePrime(int n)
{
    vector<int> primes;
    for (int i = 2; i <= n; i++)
    {
        if (sieve[i]==true)
        {
            primes.push_back(i);
        }
    }
    return primes;
}
int main()
{

    int a, b;
      createSieve();
    cin >> a >> b;

  
    vector<int> prime = generatePrime(int(sqrt(b)));
    vector<int> dummy(b - a + 1, 1);

    for (auto p : prime)
    {
        int firstOccur = (a / p) * p;
        if (firstOccur < a)
        {
            firstOccur += p;
        }
        for (int j = max(firstOccur, p * p); j <= b; j += p)
        {
            dummy[j - a] = 0;
        }
    }
    for (int i = a; i <= b; i++)
    {
        if (dummy[i - a])
        {
            cout << i << " ";
        }
    }
    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;
// vector<int> get_primes(int n)
// {
//     vector <int> final_ans;
//     vector<int> ans (n+1,1);
//     ans[0]=0;
//     ans[1]=0;
//     for (int i = 2; i <= n; i++)
//     {
//        if(ans[i]){
//         for (int j = i*2; j <=n; j+=i)
//         {
//             ans[j]=0;
//         }
//        } 
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if(ans[i]){
//             final_ans.push_back(i);
//         }
//     }
//    // return final_ans;
//     for (int i = 0; i < final_ans.size(); i++)
//     {
//         cout<<final_ans[i]<<" ";
//     }
//     return final_ans;
    
    
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int dummy[b - a + 1];
//     for (int i = 0; i <=b-a+1; i++)
//     {
//         dummy[i]=1;
//     }
    
//     vector<int> primes=get_primes(int(sqrt(b)));
//     for (auto pr : primes)
//     {
//         int iterator=(pr/a)*a;
//         if(iterator<a){
//             iterator+=pr;
//         }
//         for (int i = max(iterator,pr*pr); i <=b; i+=pr)
//         {
//             dummy[i-a]=0;
//         }
        
//     }
//     for (int i = a; i <=b; i++)
//         {
//             if(dummy[i-a]){
//                 cout<<i<<" ";
//             }
//         }

//     return 0;
// }