#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
ll sum(ll* a,int i){
    if(i<0) return 0;
    ll s = sum(a,i-1);
    return s+a[i];
}
int main(){
    int n;
    cin>>n;
    ll a[n];
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    ll summation = sum(a,n-1);
    cout<<summation<<endl;
}