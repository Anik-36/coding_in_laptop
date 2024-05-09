#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    ll n, sum = 0;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<n; i++){
        sum+=a[i];
    }
    cout<<abs(sum)<<endl;
}