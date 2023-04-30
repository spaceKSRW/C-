#include<bits/stdc++.h>
using namespace std;
void move_negatives(int arr[],int n){
    int pointer=0;
    int j=-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<pointer){
         j++;
         swap(arr[j],arr[i]);
        }

    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
    
}
int main(){
 int arr[] = {1,4,2,-9,3,-6,-1,5,-11,34,67,-12};
    int n = sizeof(arr) / sizeof(arr[0]);
move_negatives(arr,n);
return 0;
}