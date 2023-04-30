#include<bits/stdc++.h>
using namespace std;
int main(){
int a=6;
int b=4;
a=a^b;
b=b^a;
a=a^b;
cout<<a<<endl;
cout<<b<<endl;
return 0;
}