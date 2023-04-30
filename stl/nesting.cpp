#include <bits/stdc++.h>
using namespace std;
void printvec(vector<pair<int, int>> &v)
{
    cout << "size :" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << "  " << v[i].second << " ";
        cout << endl;
    }
    cout << endl;
}
void printvecar(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl;
}
int main()
{
    // vector of pair
    // vector<pair<int,int>> v={{1,2},{2,3},{3,4}};
    // ANOTHER WAY OF INSERTING
    //  int n;
    //  cin>>n;
    //  int x;
    //  int y;
    //  vector<pair<int,int>>v;
    //  for (int i = 0; i < n; i++)
    //  {
    //     cin>>x>>y;
    //     v.push_back({x,y});

    //  }

    // printvec(v);
                     //  ARRAY OF VECTOR
    // int n;
    // cin >> n;
    // int j;
    // int val;
    // vector<int> v[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> j;
    //     for (int k = 0; k < j; k++)
    //     {
    //         cin >> val;
    //         v[i].push_back(val);
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printvecar(v[i]);
    // }

    // VECTOR OF VECTOR
    vector<vector<int>> vect;
    int a;
    cin >> a;
    int b;
    int ele;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        vector<int> temp;
        for (int j = 0; j < b; j++)
        {
            cin >> ele;
            temp.push_back(ele);
        }
        vect.push_back(temp);
    }
   for (int i = 0; i < a; i++)
   {
    printvecar(vect[i]);
   }
   
    return 0;
}