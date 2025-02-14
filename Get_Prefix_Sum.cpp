#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> pre(n);
    pre[0] = a[0];
    for(int i=1; i<n; i++){
        pre[i] = pre[i-1] + a[i];
    }
    sort(pre.begin(),pre.end(),greater<ll>());
    for(int i = 0; i<n; i++){
        cout<<pre[i]<<" ";
    }
    cout<<endl;
}