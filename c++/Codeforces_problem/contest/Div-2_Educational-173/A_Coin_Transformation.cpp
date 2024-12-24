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
        ll a;
        ll ct = 0;
        cin>>a;
        if(a>3){
            while(a>=4){
                if(a>3){
                    a/=4;
                    ct++;
                }
            }
            ct = pow(2,ct);
        }else ct++;
        cout<<ct<<endl;
    }
}