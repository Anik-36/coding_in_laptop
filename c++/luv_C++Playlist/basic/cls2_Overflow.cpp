#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int a = 100000;
    int b = 100000;
    ll c = a*b ; //overflowed
    cout<<c<<endl;
    ll d = a* 1LL * b; // 1LL make the calculation into long long form
    cout<<d<<endl;
    double m = 100000;
    double n = 100000;
    double o = m*n;
    cout<<fixed<<setprecision(0)<<o<<endl;
    double f = 1e24; // precision error
    cout<<f<<endl;
}