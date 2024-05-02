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
        ll n , p = 1 , q = 1;
        cin>>n;
        int a[n];
        for(int i = 0 ; i<n ; i++){
            cin>>a[i];
        }
        for(int i = 0 ; i<n-1 ; i++){
            q = a[i]*(ll)a[i+1];
            if(q>p){
                p = q;
            }
        }
        cout<<p<<endl;
    }
}