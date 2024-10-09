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
        ll n , ct = 0 , sum = 0;
        cin>>n;
        ll a[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        if(a[0] == 0){
            ct ++;
        }
        for(int i = 1; i<n; i++){
            for(int j = 0; j<=i; j++){
                sum = sum +a[j];
            }
            for(int j = 0; j<=i; j++){
                ll temp = sum - a[j];
                if(temp == a[j]){
                    ct++;
                    j = i+1;
                }
            }
            sum = 0;
            
        }
        cout<<ct<<endl;
    }
}