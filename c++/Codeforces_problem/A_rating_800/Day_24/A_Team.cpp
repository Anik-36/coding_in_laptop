#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    int ct = 0;
    cin>>n;
    while(n--){
        int p,v,t;
        cin>>p>>v>>t;
        int sum = p + v + t;
        if(sum>=2){
            ct ++;
        }
    }
    cout<<ct<<endl;
}