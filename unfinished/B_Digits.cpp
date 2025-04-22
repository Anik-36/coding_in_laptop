#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll f = 1;
    for(int i= 1; i<=n; i++){
        f*=i;
    }
    cout<<f<<endl;
}