#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d, mul = 1, r = 0;
    cin>>a>>b>>c>>d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    mul = a*b*c*d;
    r = mul % 100;
    if(r<10) cout<<"0"<<r<<endl;
    else cout<<r<<endl;
}