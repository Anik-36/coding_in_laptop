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
        int n,q;
        cin>>n>>q;
        int a[n+10];
        int f[n+10];
        int b[n+10];
        for(int i = 1 ; i<=n; i++){
            cin>>a[i];
        }
        f[0] = b[n+1]=0;
        for(int i = 1 ; i<=n; i++){
            f[i] = __gcd(f[i-1],a[i]);
        }
        for(int i = n ; i>=1; i--){
            b[i] = __gcd(b[i+1],a[i]);
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<__gcd(f[l-1],b[r+1])<<endl;
        }
    }
}