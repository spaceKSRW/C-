#include <bits/stdc++.h>
using namespace std;
void solve2(string name,string temp,int n, int index){
if(index==n){
    cout<<name<<endl;
    return;
}
for (int i = index; i < n; i++)
{
    swap(name[i],name[index]);
    solve2(name,temp,n,index+1);
    swap(name[i],name[index]);
}

}
void solve(string name, string temp, int n, int check[])
{
    if (temp.size() == name.size())
    {
        cout << temp << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (check[i] == 0)
        {
            temp.push_back(name[i]);
            check[i] = 1;
            solve(name, temp, n, check);
            check[i] = 0;
            temp.pop_back();
        }
    }
}
int main()
{
    string name = "abc";
    string temp = "";
    int n = name.length();
    int check[name.length()] = {0};
   // solve(name, temp, n, check);
    solve2(name,temp,n,0);

    return 0;
}