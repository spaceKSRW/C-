#include <bits/stdc++.h>
using namespace std;
bool is_possible(vector<int> arr, int m, int mid)
{
    int curr_students = 1;
    int curr_sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (curr_sum + arr[i] <= mid)
        {
            curr_sum += arr[i];
        }
        else
        {
            curr_students++;
            if (curr_students > m || arr[i] > mid)
            {
                return false;
            }
            curr_sum = arr[i];
        }
    }
    return true;
}
int book_allocation(vector<int> book, int m, int sum)
{

    int min = 0;
    int max = sum;
    int mid = (min + max) / 2;
    int ans = -1;

    while (min <= max)
    {
        if (is_possible(book, m, mid))
        {
            ans = mid;
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
        mid = (min + max) / 2;
    }
    return ans;
}
int main()
{
    int m;
    vector<int> book;
    int sum = 0;
    int x;
    int num;
    cout<<"\n how many pages?"<<endl;
    cin>>x;
    cout << "\n Enter the pages";
    for (int i = 0; i < x; i++)
    {
        cin >> num;
        book.push_back(num);
    }
    for (int i = 0; i < book.size(); i++)
    {
        sum += book[i];
    }
    cout << "enter the students" << endl;
    cin >> m;
    int ans = book_allocation(book, m, sum);
    cout<<ans;
    return 0;
}