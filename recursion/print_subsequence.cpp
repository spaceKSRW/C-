#include <bits/stdc++.h>
using namespace std;
void printsub(int arr[], vector<int> vec, int index, int n)
{
    if (index == n)
    {
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
        return;
    }
    vec.push_back(arr[index]);
    printsub(arr, vec, index + 1, n);
    vec.pop_back();
    printsub(arr, vec, index + 1, n);
}
int main()
{
    int arr[] = {1, 2, 3};
    vector<int> vec;
    printsub(arr, vec, 0, 3);
    return 0;
}