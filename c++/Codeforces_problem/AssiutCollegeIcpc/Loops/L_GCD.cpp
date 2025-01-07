#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int gcd(int a, int b){
    int r = 0;
    r = b%a;
    if(r!=0){
        b = a;
        a = r;
        return gcd(a,b);
    }return a;
}
int main(){
    int n, m;
    cin>>n>>m;
    cout<<gcd(n,m)<<endl;
}