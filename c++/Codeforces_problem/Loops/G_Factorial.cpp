#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    ll n, m, fact = 1;
    cin>>n;
    for(int i=0 ; i<n; i++){
        cin>>m;
        for(int i=1 ; i<=m; i++){
            fact*=i;
        }
        cout<<fact<<endl;
        fact = 1;
    }
}