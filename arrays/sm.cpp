#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

vector<int> getSubarrayBeauty(vector<int> &nums, int k, int x)
{
    vector<int> res;
    int n = nums.size();
    for (int i = 0; i <=n-k;i++)
    {
       
        vector<int> vec2;
        for(int j=i;j<i+k;j++){
            vec2.push_back(nums[j]);
        }
     
        sort(vec2.begin(), vec2.end());
           for(auto it: vec2){
            cout<< it<<" ";
        }
        cout<<endl;
        int mini = (vec2[x-1] < 0) ? vec2[x - 1] : 0;

        res.push_back(mini);

    }
    return res;
}

int main()
{
    vector<int> nums = {1, 2, -9, -12, -11, -17, 67};

    vector<int> arr = getSubarrayBeauty(nums, 3, 2);
    cout<<endl;
    for (auto it : arr)
    {
        cout << it<<" ";
    }

    return 0;
}
