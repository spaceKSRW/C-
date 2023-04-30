#include <bits/stdc++.h>
using namespace std;
void three_sum(vector<int> &arr, int element)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            int third = element - (arr[i] + arr[j]);
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (third == arr[k])
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k];
                }
            }
        }
    }
}

void optimized_three_sum(vector<int> &arr, int element)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 2; i++)
    {
        int j = i + 1;
        int k = arr.size() - 1;
        int third_ele = element - arr[i];
        while (j < k)
        {
            if (third_ele == arr[j] + arr[k])
            {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                j++;
                k--;
            }
            else if (arr[j] + arr[k] < third_ele)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
}

int main()
{
    vector<int> arr{12, 3, 4, 1, 6, 9};
    int element;
    cout << "enter element to find 3sum of" << endl;
    cin >> element;
    // three_sum(arr,element);
    cout << endl;
    optimized_three_sum(arr, element);
    return 0;
}