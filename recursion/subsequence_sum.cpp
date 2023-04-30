#include <bits/stdc++.h>
using namespace std;
void printsum(int arr[], vector<int> vec, int i, int n, int sum, int curr_sum)
{
    if (i == n)
    {
        if (curr_sum == sum)
        {
            for (int i = 0; i < vec.size(); i++)
            {
                cout << vec[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    vec.push_back(arr[i]);
    curr_sum += arr[i];
    printsum(arr, vec, i + 1, n, sum, curr_sum);
    vec.pop_back();
    curr_sum -= arr[i];
    printsum(arr, vec, i + 1, n, sum, curr_sum);
}
int main()
{
    int arr[] = {1, 2, 3, 5, 4};
    vector<int> vec;
    int sum;
    cin >> sum;
    printsum(arr, vec, 0, 5, sum, 0);
    return 0;
}