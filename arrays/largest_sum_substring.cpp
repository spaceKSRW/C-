// BRUTE FORCE SOLUTION
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5, 4, -1, 7, 8};
    int max_sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            int current_max = 0;
            for (int k = i; k <= j; k++)
            {
                current_max += arr[k];
                if (current_max >= max_sum)
                {
                    max_sum = current_max;
                }
            }
        }
    }
    cout << "answer is" << max_sum << endl;
    // OPTIMIZING WITH O N2
    int arr2[] = {5, 4, -1, 7, 8};
    int max_sum2 = 0;
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = i; j < 5; j++)
        {
            sum += arr2[j];
            if (sum > max_sum2)
            {
                max_sum2 = sum;
            }
        }
    }
    cout<<"largest sum subarray : "<<max_sum2;
    return 0;
}