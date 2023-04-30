#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    // int n;
    // int x;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> x;
    //     v.push_back(x);
    // }
    vector<int> vec(5); // declare size by 5 , filled with zeroes
    //vector<int> vec2(3,10); // 3 10's will be copied

    printvec(vec);
    cout<<endl;
   // vector<int> v2=vec; // o(n) copying a vector
    vector<int> &v2=vec;
    v2.push_back(23);
   // printvec(v2);  
    cout<<endl;
   // printvec(vec); 
              // VECTOR OF STRINGS
vector<string> str;
int n;
string ss;
cin>>n;
for (int i = 0; i < n; i++)
{
    cin>>ss;
    str.push_back(ss);
}
for (int i = 0; i < str.size(); i++)
{
    cout<<str[i]<<" ";
}
    return 0;
}