#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int M = 1e7+10;
int main(){
    ll n;
    ll fact = 1;
    cin>>n;
    for(int i=2; i<=n; i++){
        fact = (fact*i) % M;
    }
    cout<<fact<<endl;
}