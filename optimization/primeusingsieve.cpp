#include <iostream>

#define N 1000000
using namespace std;
int main()
{
    int arr[1000001];
     int n;
    for (int i = 0; i <= N; i++)
        arr[i] = -1;

    for (int i = 2; i*i<= N; i++)
    {
        if (arr[i] == -1)
        {
            for (int j = i; j <= N; j += i)
            {
                if (arr[j] == -1)
                {
                    arr[j] = i;
                }
            }
        }
    }

   
   cout<<"enter value \n";
   cin>>n;
   while(n>1){
    cout<<arr[n]<<" ";
    n/=arr[n];
   }

    return 0;
}