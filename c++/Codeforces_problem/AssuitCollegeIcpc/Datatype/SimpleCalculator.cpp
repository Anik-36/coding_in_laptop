#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, sum, sub;
    long long mul;
    cin>>a>>b;
    sum = a+b;
    mul = a*b;
    sub = a-b;
    cout<<a<<" + "<<b<<" = "<<sum<<endl;
    cout<<a<<" * "<<b<<" = "<<mul<<endl;
    cout<<a<<" - "<<b<<" = "<<sub<<endl;
}