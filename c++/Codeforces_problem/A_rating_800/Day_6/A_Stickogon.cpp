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
        int n , ct = 0;
        cin>>n;
        int a[n];
        int hsh[105] = {0};
        for(int i = 0; i<n; i++){
            cin>>a[i];
            hsh[a[i]]++;
        }
        if(n>=3){
            for(int i = 0 ; i<n ; i++){
                if(hsh[a[i]] >=3 ){
                    ct = ct + (hsh[a[i]]/3);
                    hsh[a[i]] = 0;
                }
            }
        }
        cout<<ct<<endl;
    }
}