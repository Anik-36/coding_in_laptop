#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll m =1;
        for(int i=0 ; i<n; i++){
            cin>>a[i];
            m = m*a[i];
        }
        int r = m%10;
        if(r == 2 || r==3 || r==5){
            yes
        }else{
            no
        }
    }
}