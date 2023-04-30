#include <bits/stdc++.h>
using namespace std;
void get_pair(vector<int> v, int element)
{
    sort(v.begin(), v.end());
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        if (v[i] + v[j] == element)
        {
            cout << v[i] << " " << v[j] << endl;
        }
        if (v[i] + v[j] < element)
        {
            i++;
        }
        else
            j--;
    }
}

int main()
{
    vector<int> vec{1, 5, 7, -1};
    int element;
    cin >> element;
    get_pair(vec, element);
    return 0;
}