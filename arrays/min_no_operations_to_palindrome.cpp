#include <bits/stdc++.h>
using namespace std;
int operations(vector<int> vec)
{
    int i = 0;
    int j = vec.size() - 1;
    int operations=0;
    while (i <= j)
    {
        if (vec[i] == vec[j])
        {
            i++;
            j--;
        }
        else if (vec[j]>vec[i]){
             i++;
           vec[i]+=vec[i-1];
          
           operations++;
        }
        else{
          j--;
           vec[j]+=vec[j+1];
          operations++;
        }
    }
    return operations;
}
int main()
{
    int n;
    int input;
    vector<int> vec;
    cout<<"enter the size";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >>input;
        vec.push_back(input);
    }
    cout << "Number of Operations required to make a palindrome is" << operations(vec);

    return 0;
}