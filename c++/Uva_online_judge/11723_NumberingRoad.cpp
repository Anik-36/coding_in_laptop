#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    ll r , n, rest, div, mod, count = 1;
    while((cin>>r>>n) ,(r!=0) || (n!=0)){
        rest = r - n;
        div = rest/n;
        mod = rest%n;
        if(mod>0){
            div++;
        }
        if(div<=26){
            cout<<"Case "<<count<<": "<<div<<endl;
        }else cout<<"Case "<<count<<": "<<"impossible"<<endl;
        count++;
    }
}