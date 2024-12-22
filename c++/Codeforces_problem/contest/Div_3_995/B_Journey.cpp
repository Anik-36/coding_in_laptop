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
        ll a[3];
        cin>>n;
        ll s = 0;
        ll d = 0;
        ll ct = 0;
        for(int i = 0 ; i<3; i++){
            cin>>a[i];
            d+=a[i];
        }
        // for(int i = 0 ; i<4; i++){
        //     if(s<n){
        //         if(i>2) i=0;
        //         s+=a[i];
        //         ct++;
        //     }
        // }
        ll b = n/d;
        if(b>1){
            int r = b*3;
            ll o = b*d;
            if(o<n){
                for(int i = 0 ; i<3; i++){
                    if(o<n){
                        o+=a[i];
                        r++;
                    }
                }
            }
            cout<<r<<endl;
        }else{
            int j = 0;
            while(s<n){
                if(j>2) j=0;
                s+=a[j];
                ct++;
                j++;
            }
            cout<<ct<<endl;
        }

    }
}