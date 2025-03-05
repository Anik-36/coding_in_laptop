#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
bool isSquar(ll s){
    if(s>=0){
        ll sr = sqrt(s);
        return (sr * sr == s);
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll sum = 0;
        for(int i = 0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }
        if(isSquar(sum) == true) yes
        else no

    }
}