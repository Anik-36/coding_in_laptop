#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n);
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> pre(n);
    pre[0] = a[0];
    for(int i = 1 ; i<n; i++){
        pre[i] = a[i] + pre[i-1];
    }
    while(q--){
        ll l,r;
        cin>>l>>r;
        l--;
        r--;
        ll sum ;
        if(l==0) sum = pre[r];
        else sum = pre[r] - pre[l-1];
        cout<<sum<<endl;
    }
}