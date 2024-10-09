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
        int n,m,ct = 0;
        cin>>n>>m;
        string a;
        cin>>a;
        for(int i = 0 ; i<n; i++){
            if(a[i]=='A' || a[i]=='B' || a[i]=='C' || a[i]=='D' || a[i]=='E' || a[i]=='F' || a[i]=='G'){
                ct++;
            }
        }
        cout<<ct<<endl;
    }
}