#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    ll n , ct = 0, sum = 0;
    cin>>n;
    ll a[n];
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
        sum = sum + a[i] + (a[i]-1) * ct ;
        ct++;
    }
    cout<<sum<<endl;
}